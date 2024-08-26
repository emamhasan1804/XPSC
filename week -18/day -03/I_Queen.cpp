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
    int n;
    cin>>n;
    map<int,int> mp;
    int root = -1;
    for(int i=1;i<=n;i++) {
        int a,b;
        cin>>a>>b;
        if(a==-1) {
            if(b==0) mp[i]=1;
            continue;
        }
        if(b==0) {
            mp[i]=1;
            mp[a]=1;
        }
    }
    int cnt = 0;
    for(int i=1;i<=n;i++) {
        if(i==root) continue;
        if(!mp[i]) {cout<<i<<" ";cnt++;}
    }
    cout<<endl;
    if(!cnt) cout<<-1<<endl;
    return 0;
}
