#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
// template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // for set
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; // for multiset
#define int long long
#define float double
#define endl '\n'


const int K=25;
const int MAXN = 2e5+5;
int st[MAXN][K + 1];
int logg[MAXN+1];

void initLog() {
    logg[1] = 0;
    for(int i=2;i<=MAXN;i++) {
        logg[i]=logg[i/2]+1;
    }
}
void build_sparse_table(vector<int>&v) //O(nlogn)
{
    int n = v.size();
    for(int i=0;i<n;i++) {
        st[i][0] = v[i];
    }
    for(int j=1;j<=K;j++) {
        for(int i=0;i+(1<<j)<=n;i++) {
            st[i][j] = max(st[i][j-1],st[i+(1<<(j-1))][j-1]);
        }
    }
}

int query(int l,int r) //O(1)
{
    int j=logg[r-l+1];
    int mx = max(st[l][j],st[r-(1<<j)+1][j]);
    return mx;
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    initLog();
    int t;cin>>t;while(t--) 
    {
        string s;
        cin>>s;
        int n = s.size();
        vector<int> v;
        v.push_back(0);
        for(char c:s) {
            if(c=='(') v.push_back(v.back()+1);
            else v.push_back(v.back()-1);
        }
        build_sparse_table(v);
        map<int,list<int>>mp;
        int ans = 0;
        for(int i=0;i<=n;i++) {
            list<int> &l = mp[v[i]];
            while(!l.empty()) {
                int ind = l.front();
                int mx = query(ind,i);
                if(v[i]-mx+v[i]<0) {
                    l.pop_front();
                }
                else break;
            }
            ans += l.size();
            mp[v[i]].push_back(i);
        }
        cout<<ans<<endl;
    }
    return 0;
}
