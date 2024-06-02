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
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int mn = v.front();
        for(int i=0;i<n-1;i++) {
            mn = min(mn,(v[i+1]-v[i]));
        }
        if(k==1) cout<<mn<<endl;
        else if(k>2) cout<<0<<endl;
        else {
            for(int i=0;i<n-1;i++) {
                for(int j=i+1;j<n;j++) {
                    int dif = v[j]-v[i];
                    int ind = lower_bound(v.begin(),v.end(),dif) - v.begin();
                    mn = min(mn,v[ind]-dif);
                    if(ind>0) mn = min(mn,dif-v[ind-1]);
                }
            }
            cout<<mn<<endl;
        }
    }
    return 0;
}
