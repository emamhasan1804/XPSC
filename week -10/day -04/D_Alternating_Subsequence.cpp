#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // for set
// template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; // for multiset
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
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        int r=0,sum=0;
        while(r<n) {
            if(v[r]>0) {
                int mx = INT_MIN;
                while(r<n && v[r]>0) {
                    mx = max(mx,v[r]);
                    r++;
                }
                sum+=mx;
            }
            else {
                int mx = INT_MIN;
                while(r<n && v[r]<0) {
                    mx = max(mx,v[r]);
                    r++;
                }
                sum += mx;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
