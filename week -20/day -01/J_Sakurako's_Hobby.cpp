#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
// template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // forset
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; // formultiset
#define int long long
#define float double
#define endl '\n'


int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++) cin>>v[i];
        string s;
        cin>>s;
        vector<int>ans(n+1);
        vector<int>vis(n+1);
        
        for(int i=1;i<=n;i++) {
            if(vis[i]) continue;
            vector<int> temp;
            int x=i;
            while(vis[x]==0) {
                temp.push_back(x);
                vis[x] = 1;
                x = v[x];
            }
            int cnt = 0;
            for(int it:temp) {
                if(s[it-1] == '0') {
                    cnt++;
                }
            }
            for(int it:temp) {
                ans[it]=cnt;
            }
        }
        
        for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
