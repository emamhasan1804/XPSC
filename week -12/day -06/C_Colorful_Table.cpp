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
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i].first;
            v[i].second=i;
        }
        sort(v.begin(),v.end());
        int mn = v.back().second, mx = v.back().second;
        map<int,int> mp;
        for(int i=n-1;i>=0;i--) {
            mn = min(mn,v[i].second);
            mx = max(mx,v[i].second);
            mp[v[i].first] = max(mp[v[i].first],((mx-mn+1)*2));
        }
        for(int i=1;i<=k;i++) {
            cout<<mp[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
