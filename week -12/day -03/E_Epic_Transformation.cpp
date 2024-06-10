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

        int mx = 0;
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            mp[v[i]]++;
            mx =max(mp[v[i]],mx);
        }
        if(mx*2>n) {
            cout<<mx - (n-mx)<<endl;
        }
        else cout<<n%2<<endl;
    }
    return 0;
}
