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
        int n,m;
        cin>>n>>m;
        vector<int> ar[n];
        vector<tuple<int,int,int>> v; // val,row ,col_ ind
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                int vl;
                cin>>vl;
                ar[i].push_back(vl);
                v.push_back(make_tuple(vl,i,j));
            }
        }
        sort(v.begin(),v.end());
        unordered_map<int,map<int,int>> mp;
        for(int i=0;i<m;i++) {
            int b = get<1> (v[i]), c = get<2> (v[i]);
            mp[b][c] = 1;
        }
        int faka = 0;
        for(int i=0;i<n;i++) {
            int fakacnt = 0;
            int faka_last = -1;
            int x = mp[i].size();
            for(int j=0;j<m;j++) {
                if(fakacnt==faka){
                    break;
                }
                if(mp[i][j]==1) continue;
                cout<<ar[i][j]<<" ";
                fakacnt++;
                faka_last=j;
            }
            for(auto it:mp[i]) {
                if(it.second==1) cout<<ar[i][it.first]<<" ";
            }
            for(int j=faka_last+1;j<m;j++) {
                if(mp[i][j]==1) continue;
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
            faka += x;
        }
    }
    return 0;
}
