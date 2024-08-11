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
        int n,k,N;
        cin>>n>>k;
        N=n*k;
        vector<int> v(N);
        for(int i=0;i<N;i++) {
            cin>>v[i];
        }
        int mid = (n-1)/2, bad = mid*k, pore = n-mid, sum=0;
        while(bad<N) {
            sum += v[bad];
            bad += pore;
        }
        cout<<sum<<endl;
    }
    return 0;
}
