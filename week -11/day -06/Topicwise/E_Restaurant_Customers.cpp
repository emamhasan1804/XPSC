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
    map<int,int> dif;
    while(n--) {
        int l,r;
        cin>>l>>r;
        dif[l]++;
        dif[r+1]--;
    }
    int cnt = 0;
    int mx = 0;
    for(pair<int,int> it:dif) {
        cnt += it.second;
        mx = max(cnt,mx);
    }
    cout<<mx<<endl;
    return 0;
}
