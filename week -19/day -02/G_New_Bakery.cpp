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
        int n,a,b;
        cin>>n>>a>>b;
        if(b<=a) cout<<n*a<<endl;
        else {
            int x = b-a;
            if(x>=n) {
                x = n;
                int sum = (b*(b+1))/2;
                b-=x;
                sum -= ((b*(b+1))/2);
                cout<<sum<<endl;
            }
            else {
                n-=x;
                int sum = (b*(b+1))/2;
                sum -= (a*(a+1))/2;
                sum += (n*a);
                cout<<sum<<endl;

            }
        }
    }
    return 0;
}
