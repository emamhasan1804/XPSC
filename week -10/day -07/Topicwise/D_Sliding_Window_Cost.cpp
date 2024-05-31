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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    pbds<int> p;
    for(int i=0;i<k;i++) {
        p.insert(v[i]);
    }
    int mid = ((k+1)/2)-1;
    auto it = p.find_by_order(mid);
    int middle = *it;
    int sum = 0;
    for(int i:p) {
        sum += abs(i-middle);
    }
    cout<<sum<<" ";
    int l=0,r=k;
    while(r<n) {
        int indx = p.order_of_key(v[l]);
        p.erase(p.find_by_order(indx));
        p.insert(v[r]);
        int middle1 = *p.find_by_order(mid);
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
