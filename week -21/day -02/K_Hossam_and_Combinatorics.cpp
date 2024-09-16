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
        map<int,int> mp;
        int n;
        cin>>n;
        int mx = 0,mn = INT_MAX;
        while(n--) {
            int vl;cin>>vl;mp[vl]++;
            mx = max(mx,vl);
            mn = min(mn,vl);
        }
        if(mx==mn) {
            cout<<(mp[mx]*(mp[mx]-1))<<endl;
        }
        else cout<<2*mp[mx]*mp[mn]<<endl;
    }
    return 0;
}
