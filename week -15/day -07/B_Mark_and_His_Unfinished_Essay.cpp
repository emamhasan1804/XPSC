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


int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n,m,q;
        cin>>n>>m>>q;
        string s;
        cin>>s;
        vector<pair<int,int>> op(m);
        for(int i=0;i<m;i++) {
            int a,b;
            cin>>a>>b;
            a--;
            op[i]={a,b};
        }
        vector<int> sz(m+1);
        sz[0]=n;
        int l = 1;
        for(auto it:op) {
            sz[l] = sz[l-1]+op[l-1].second-op[l-1].first;
            l++;
        }
        // for(int i:sz) cout<<i<<" ";
        // cout<<endl;
        while(q--) {
            int vl;cin>>vl;
            vl--;
            for(int i=m;i>=0;i--) {
                if(vl>=sz[i]) {
                    vl -= sz[i];
                    vl += op[i].first;
                }
            }
            cout<<s[vl]<<endl;
        }
    }
    return 0;
}
