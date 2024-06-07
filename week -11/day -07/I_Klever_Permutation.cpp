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
        vector<int> v(n+1);
        int mn = 1;
        int mx = n;
        for(int i=1;i<=k;i++) {
            if(i%2==1) {
                for(int j=i;j<=n;j+=k) {
                    v[j] = mn;
                    mn++;
                }
            }
            else {
                for(int j=i;j<=n;j+=k) {
                    v[j] = mx;
                    mx--;
                }
            }
        }
        for(int i=1;i<=n;i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
