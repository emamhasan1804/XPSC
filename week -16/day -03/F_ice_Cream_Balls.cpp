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
        int x;
        cin>>x;
        int n = ceil((1+(sqrt(1+(x*8))))/2.0);
        int k = (n*(n-1))/2;
        if(k==x) cout<<n<<endl;
        else {
            n--;
            k = (n*(n-1))/2;
            int s = x - k;
            n+=s;
            cout<<n<<endl;
        }
    }
    return 0;
}
