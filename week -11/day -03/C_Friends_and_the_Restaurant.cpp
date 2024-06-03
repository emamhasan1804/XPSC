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
            cin>>v[i].first;
        }
        for(int i=0;i<n;i++) {
            cin>>v[i].second;
        }
        vector<int> final;
        for(int i=0;i<n;i++) {
            final.push_back( v[i].second-v[i].first);
        }
        sort(final.begin(),final.end(),greater<int>());
        int l = 0,r=final.size()-1;
        int cnt = 0;
        while(l<r) {
            if(final[l]>=abs(final[r])) {
                cnt ++;
                l++;
            }
            r--;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
