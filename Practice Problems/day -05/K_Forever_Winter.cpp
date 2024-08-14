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
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(205);
        map<int,int> mp;
        for(int i=0;i<m;i++) {
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
            mp[a]++;
            mp[b]++;
        }
        set<int> s;
        int cnt = 0;
        for(auto it:mp) {
            if(it.second==1) {
                s.insert(v[it.first].front());
                cnt++;
            }
        }
        if(s.size()==1) {
            cout<<n-1<<" "<<0<<endl;
            continue;
        }
        cout<<s.size()<<" "<<(cnt/s.size())<<endl;
    }
    return 0;
}
