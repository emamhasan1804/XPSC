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
int n;
string s;
vector<pair<int,int>> v(3e5+5);
int ans;

void dfs(int src,int cnt) {
    if(v[src].first==0 && v[src].second==0) {
        ans = min(ans,cnt);
        return;
    }
    if(v[src].first!=0) {
        if(s[src-1]!='L') dfs(v[src].first,cnt+1);
        else dfs(v[src].first,cnt);
    }
    if(v[src].second!=0) {
        if(s[src-1]!='R') dfs(v[src].second,cnt+1);
        else dfs(v[src].second,cnt);
    }
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        cin>>n>>s;
        v.clear();
        ans = INT_MAX;
        for(int i=1;i<=n;i++) {
            cin>>v[i].first>>v[i].second;
        }
        dfs(1,0);
        cout<<ans<<endl;
    }
    return 0;
}
