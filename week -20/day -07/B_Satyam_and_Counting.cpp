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
        int n;
        cin>>n;
        vector<pair<int,int>> v(n);
        map<pair<int,int>,int> mp;
        map<int,int> x,y;
        for(int i=0;i<n;i++) {
            int a,b;
            cin>>a>>b;
            v[i]={a,b};
            x[a]++;y[b]++;
            mp[{a,b}]=1;
        }
        int ans = 0;
        for(auto it:x) {
            if(it.second==2) {
                ans += n-2;
            }
        }
        for(auto it:v) {
            if(it.second==0) {
                pair<int,int> a = {it.first-1,1}, b = {it.first+1,1};
                if(mp[a]==1 && mp[b]==1) ans++;
            }
            else {
                pair<int,int> a = {it.first-1,0}, b = {it.first+1,0};
                if(mp[a]==1 && mp[b]==1) ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
