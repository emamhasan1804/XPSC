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
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i].first>>v[i].second;
        }
        sort(v.begin(),v.end());
        pbds<int> p;
        int cnt = 0;
        for(int i=n-1;i>=0;i--) {
            cnt += p.order_of_key(v[i].second);
            p.insert(v[i].second);
        }
        cout<<cnt<<endl;
    }
    return 0;
}
