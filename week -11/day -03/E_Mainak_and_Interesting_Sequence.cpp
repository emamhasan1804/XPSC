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
        int n,m;
        cin>>n>>m;
        if(n>m) {
            cout<<"No"<<endl;
        }
        else if(n%2==1) {
            cout<<"Yes"<<endl;
            for(int i=1;i<n;i++) {
                cout<<1<<" ";
            }
            cout<<m-n+1<<endl;
        }
        else if(n%2==0) {
            if(m%2==0) {
                cout<<"Yes"<<endl;
                for(int i=1;i<n-1;i++) {
                    cout<<1<<" ";
                }
                cout<<(m-n+2)/2<<" "<<(m-n+2)/2<<endl;
            }
            else {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
