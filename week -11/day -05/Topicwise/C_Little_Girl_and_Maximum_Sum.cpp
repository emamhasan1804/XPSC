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
    int n,q;
    cin>>n>>q;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++) {
        cin>>v[i];
    }
    deque<int> dif(n+2);
    while(q--) {
        int a,b;
        cin>>a>>b;
        dif[a]++;
        dif[b+1]--;
    }
    for(int i=1;i<=n;i++) {
        dif[i]+=dif[i-1];
    }
    dif.pop_back();
    dif.pop_front();
    sort(dif.begin(),dif.end(),greater<int>());
    sort(v.begin(),v.end(),greater<int>());
    int sum = 0;
    for(int i=0;i<dif.size();i++) {
        sum += (dif[i]*v[i]);
    }
    cout<<sum<<endl;
    return 0;
}
