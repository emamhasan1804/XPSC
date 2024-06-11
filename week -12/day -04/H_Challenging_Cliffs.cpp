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
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        int mn = INT_MAX;
        int a , b;
        for(int i=0;i<n-1;i++) {
            int x = v[i+1]-v[i];
            if(x<mn) {
                mn = x;
                a = i,b=i+1;
            }
        }
        vector<int> ans(n);
        ans[0]=v[a],ans[n-1]=v[b];
        int r = n-a-1;
        int ind = 0;
        for(int i=r;i<n-1;i++) {
            ans [i] = v[ind];
            ind++;
        }
        ind = b+1;
        for(int i=1;i<r;i++) {
            ans[i]=v[ind];
            ind++;
        }
        for(int i:ans) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}

/*
    1 2 3 3 4 5
    3 4 5 1 2 3


*/
