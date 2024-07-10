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
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        vector<int> max_sum(n+1,INT_MIN);
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=0;i<n;i++) {
            int sum = 0;
            for(int j=i;j<n;j++) {
                sum+=v[j];
                int length = j-i+1;
                max_sum[length] = max(max_sum[length],sum);
            }
        }
        for(int i=0;i<=n;i++) {
            int ans = 0;
            for(int j=1;j<=n;j++) {
                if(i>=j) {
                    int sum = j*x+max_sum[j];
                    ans = max(sum,ans);
                }
                else {
                    int sum = i*x+max_sum[j];
                    ans = max(sum,ans);
                }
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}
