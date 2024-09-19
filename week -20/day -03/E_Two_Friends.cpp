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
    int cs =1;
    int t_c;cin>>t_c;while(t_c--) 
    {
        int n;
        cin>>n;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++) {
            cin>>v[i];
        }
        int ans = n;
        for(int i=1;i<=n;i++) {
            map<int,int> mp;
            int cnt = 0;
            int j = i;
            while(mp[j]==0) {
                if(cnt>2) break;
                mp[j]++;
                cnt++;
                j = v[j];
            }
            ans = min(ans,cnt);
        }
        if(ans>2) cout<<3<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}