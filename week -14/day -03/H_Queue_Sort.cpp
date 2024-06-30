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
        int mn = INT_MAX;
        int ind = -1;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            if(v[i]<mn) {
                mn = v[i];
                ind = i;
            }
        }
        bool flag = true;
        for(int i=ind;i<n-1;i++) {
            if(v[i]>v[i+1]) {
                flag = false;
                break;
            }
        }
        if(!flag) cout<<-1<<endl;
        else cout<<ind<<endl;
        
    }
    return 0;
}
