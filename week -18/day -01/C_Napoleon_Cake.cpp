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
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        map<int,int> mp;
        int cnt = 0;
        for(int i=n-1;i>=0;i--) {
            cnt = max(cnt,v[i]);
            if(cnt==0) mp[i]=1;
            else cnt--;
        }
        for(int i=0;i<n;i++) {
            cout<<!mp[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
