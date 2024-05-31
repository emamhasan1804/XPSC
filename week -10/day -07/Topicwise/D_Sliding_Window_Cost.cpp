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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    pbds<pair<int,int>> p;
    for(int i=0;i<k;i++) {
        p.insert({v[i],i});
    }
    int mid = ((k+1)/2)-1;
    auto it = p.find_by_order(mid);
    int middle = it->first;
    int sum = 0;
    for(auto i:p) {
        sum += abs(i.first-middle);
    }
    cout<<sum<<" ";
    int l=0,r=k;
    while(r<n) {
        p.erase({v[l],l});
        p.insert({v[r],r});
        int middle1 = (p.find_by_order(mid))->first;
        sum += abs(middle1-v[r]) - abs(middle-v[l]);
        if(k%2 == 0) {
            sum -= (middle1-middle);
        }
        middle=middle1;
        cout<<sum<<" ";
        r++;
        l++;
    }
    return 0;
}
