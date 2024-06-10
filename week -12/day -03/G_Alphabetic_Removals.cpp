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

bool cmp(const pair<char,int> a , const pair<char,int> b) {
    return a.second<b.second;
}

int32_t main() 
{
    int n,k;
    cin>>n>>k;
    vector<pair<char,int>> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    sort(v.begin()+k,v.end(),cmp);
    for(auto it=v.begin()+k;it!=v.end();it++) {
        cout<<it->first;
    }
    cout<<endl;
    return 0;
}
