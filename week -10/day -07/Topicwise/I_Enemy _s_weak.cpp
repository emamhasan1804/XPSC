#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // for set
// template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; // for multiset
#define int long long
#define float double
#define endl '\n'


int32_t main() 
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    pbds<int> p;
    vector<pair<int,int>> ans(n); // first = age boro ase koita , second = pore choto ase koita
    for(int i=0;i<n;i++) {
        int cnt = p.order_of_key(v[i]);
        cnt = p.size()-cnt;
        p.insert(v[i]);
        ans[i].first=cnt;
    }
    pbds<int>pb;
    for(int i=n-1;i>=0;i--) {
        int cnt = pb.order_of_key(v[i]);
        pb.insert(v[i]);
        ans[i].second=cnt;
    }
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += (ans[i].first*ans[i].second);
    }
    cout<<sum<<endl;
    return 0;
}
