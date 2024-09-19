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
        if(n%2) {
            cout<<"Yes"<<endl;
            n*=2;
            int last = n;
            for(int i=1;i<=n/2;i+=2) {
                cout<<i<<" "<<last<<endl;
                last--;
            }
            for(int i=2;i<=n/2;i+=2) {
                cout<<i<<" "<<last<<endl;
                last--;
            }
        }
        else cout<<"No"<<endl;
    }
    return 0;
}
