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
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        vector<int> b(n);
        map<int,int> mp;
        int mx = INT_MIN;
        for(int i=0;i<n;i++) {
            cin>>b[i];
            b[i] = a[i]-b[i];
            mp[b[i]]++;
            mx = max(mx,b[i]);
        }
        cout<<mp[mx]<<endl;
        for(int i=0;i<n;i++) {
            if(b[i]==mx) cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
