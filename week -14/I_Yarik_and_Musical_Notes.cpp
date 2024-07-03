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
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            mp[v[i]]++;
            // int x = pow(2,v[i]);
            // v[i]=x;
        }
        int cnt = 0;
        for(auto it:mp) {
            int x = (it.second*(it.second-1))/2;
            cnt+=x;
        }
        int x = mp[1];
        int y = mp[2];
        cnt += (x*y);
        cout<<cnt<<endl;
        // for(int i=0;i<n;i++) {
        //     for(int j=i+1;j<n;j++) {
        //         int a = pow(v[i],v[j]);
        //         int b = pow(v[j],v[i]);
        //         if(a==b) cout<<v[i]<<" "<<v[j]<<endl;
                
        //     }
        // }
        // cout<<endl;
    }
    return 0;
}

/*
    1 1  1 1 1
    1 2 1 2 2 2

*/
