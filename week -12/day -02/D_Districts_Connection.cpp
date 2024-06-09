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
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) {
            cin>>v[i].first;
            v[i].second = i+1;
            mp[v[i].first]++;
        }
        sort(v.begin(),v.end());
        if(mp.size()==1) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            for(int i=0;i<n-1;i++) {
                if(v[i].first==v[n-1].first) {
                    cout<<v[i].second<<" "<<v[0].second<<endl;
                }
                else cout<<v[i].second<<" "<<v[n-1].second<<endl;
            }
        }
    }
    return 0;
}
