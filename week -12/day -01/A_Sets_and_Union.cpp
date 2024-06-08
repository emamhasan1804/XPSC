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
        vector<unordered_map<int,int>> v(n);
        map<int ,int> mp;
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            for(int j=0;j<x;j++) {
                int vl;
                cin>>vl;
                mp[vl] = 1;
                v[i][vl]=1;
            }
        }
        int cnt = 0;
        for(auto it:mp) {
            set<int> s;
            for(int i=0;i<n;i++) {
                if(v[i][it.first]==0) {
                    for(auto it:v[i]) {
                        if(it.second>0)s.insert(it.first);
                    }
                }
            }
            if(cnt<s.size()) cnt = s.size();
        }
        cout<<cnt<<endl;
    }
    return 0;
}
