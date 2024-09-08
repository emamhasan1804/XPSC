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
        int a,b,k;
        cin>>a>>b>>k;
        int x = a/k;
        if(a%k) x++;
        int y = b/k;
        if(b%k) y++;
        if(x==y) cout<<x+y<<endl;
        else if(x>y) {
            cout<<x*2-1<<endl;
        }
        else cout<<y*2<<endl;
    }
    return 0;
}
