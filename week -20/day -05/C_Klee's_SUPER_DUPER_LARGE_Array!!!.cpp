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
        int n,k;
        cin>>n>>k;
        int st = k,end = n+k-1;
        int l=st,r=end,mid,ans = (LLONG_MAX);
        int total = (end*(end+1))/2;
        total -= ((st*(st-1))/2);
        while(l<=r) {
            mid = (r+l)/2;
            int x = mid*(mid+1)/2;
            x-= k*(k-1)/2;
            int y = total - x;
            ans = min(ans,abs(y-x));
            if(y>x) l = mid+1;
            else r = mid-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
