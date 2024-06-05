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
    int n;
    cin>>n;
    int temp = n;
    map<int,int> mp;
    int mx = 0;
    while(temp--) {
        int a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b+1]--;
        mx = max(mx,b);
    }
    bool flag = true;
    int cnt = 0;
    for(pair<int,int> it:mp) {
        cnt += it.second;
        if(cnt>2) flag = false;
        if(!flag) break;
    }
    (flag)? cout<<"YES"<<endl: cout<<"NO"<<endl;
    return 0;
}
