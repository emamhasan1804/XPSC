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
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> even,odd;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            if(v[i]%2) {
                odd.push_back(i+1);
            }
            else even.push_back(i+1);
        }
        if(odd.size()>=3) {
            cout<<"YES"<<endl;
            cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<endl;
        }
        else if(even.size()>=2 && odd.size()>=1) {
            cout<<"YES"<<endl;
            cout<<even[0]<<" "<<even[1]<<" "<<odd.front()<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
