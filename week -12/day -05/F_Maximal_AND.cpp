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
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<=30;j++) {
                if(v[i]&(1<<j)) mp[j]++;
            }
        }
        int ans = 0;
        for(int i=30;i>=0;i--) {
            int baki = n - mp[i];
            if(baki >k) continue;
            else {
                int x = pow(2,i);
                ans += x;
                k -= baki;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
