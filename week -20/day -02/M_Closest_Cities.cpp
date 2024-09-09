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
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        vector<int> par(n);
        par[0]=1;
        par[n-1]=n-2;
        for(int i=1;i<n-1;i++) {
            int x = abs(v[i]-v[i-1]);
            int y = abs(v[i]-v[i+1]);
            if(x<y) {
                par[i]=i-1;
                
            }
            else par[i]=i+1;
        }
        vector<int> start(n);
        for(int i=1;i<n;i++) {
            if(par[i-1]==i) start[i]=1;
            else start[i] = v[i]-v[i-1];
        }
        vector<int> pre_start(n);
        for(int i=1;i<n;i++) {
            pre_start[i] = start[i]+pre_start[i-1];
        }

        vector<int> end(n);
        for(int i=n-2;i>=0;i--) {
            if(par[i+1]==i) end[i]=1;
            else end[i]=v[i+1]-v[i];
        }
        vector<int> suf_end(n);
        for(int i=n-2;i>=0;i--) {
            suf_end[i] = end[i]+suf_end[i+1];
        }
        int m;
        cin>>m;
        while(m--) {
            int i,j;
            cin>>i>>j;
            i--;
            j--;
            if(i<j) {
                cout<<pre_start[j]-pre_start[i]<<endl;
            }
            else {
                cout<<suf_end[j]-suf_end[i]<<endl;
            }
        }
    }
    return 0;
}
