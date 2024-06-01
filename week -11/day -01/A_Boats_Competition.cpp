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
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            mp[v[i]]++;
        }
        set<int> s;
        int cnt = 0;
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                s.insert(v[i]+v[j]);
            }
        }
        int ans = 0;
        for(int it:s) {
            int cnt = 0;
            // cout<<it<<" ";
            map<int,int> temp = mp;
            for(int i=0;i<n;i++) {
                int a = v[i];
                int b = it-v[i];
                if(temp[a]<=0) continue;
                temp[a]--;
                if(temp[b]>0) {
                    cnt ++;
                    temp[b]--;
                }
            }
            // cout<<cnt<<endl;
            ans = max(cnt,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}
