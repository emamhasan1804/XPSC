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
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int cnt = 0;
        for(int i=0;i<n;i++) {
            if(v[i]==1) {
                cnt++;
                v[i]--;
                if(i+1<n) v[i+1]--;
            }
            else if(v[i]!=0) {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
