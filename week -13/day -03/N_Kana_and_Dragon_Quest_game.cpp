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
    int t;cin>>t;while(t--) 
    {
        int n,a,b;
        cin>>n>>a>>b;
        while(a>0 && n>20) {
            n/=2;
            n+=10;
            a--;
        }
        n-= (10*b);
        if(n>0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
