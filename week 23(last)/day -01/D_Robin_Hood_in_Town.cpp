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
        int n;
        cin>>n;
        vector<int> v(n);
        int sum = 0;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            sum += v[i];
        }
        sort(v.begin(),v.end());
        int x = n/2;
        if(x+1==n) {
            cout<<-1<<endl;
            continue;
        }
        int least = v[x];
        least *=(2*n);
        if(least+1>sum) {
            cout<<least+1-sum<<endl;
        }
        else cout<<0<<endl;
    }
    return 0;
}
