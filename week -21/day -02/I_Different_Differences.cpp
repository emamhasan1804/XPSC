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
    int cs =1;
    int t_c;cin>>t_c;while(t_c--) 
    {
        int n,k;
        cin>>n>>k;
        vector<int> v;
        v.push_back(1);
        int last = 1;
        for(int i=1;i<n;i++) {
            v.push_back(v.back()+last);
            last++;
        }
        last = k;
        for(int i=n-1;i>=0;i--) {
            if(v[i]>last) {
                v[i]=last;
                last--;
            }
        }
        for(int i:v) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
