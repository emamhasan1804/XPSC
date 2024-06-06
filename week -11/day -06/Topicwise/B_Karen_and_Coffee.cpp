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
    int n,k,q;
    cin>>n>>k>>q;
    map<int,int> dif;
    int mx = 1;
    while(n--) {
        int l,r;
        cin>>l>>r;
        dif[l]++;
        dif[r+1]--;
        mx = max(mx,r);
    }
    for(int i=1;i<=mx;i++) {
        dif[i]+= dif[i-1];
    }
    for(int i=1;i<=mx;i++) {
        if(dif[i]>=k) {
            dif[i]=1;
        }
        else dif[i]=0;
    }
    for(int i=1;i<=mx;i++) {
        dif[i] += dif[i-1];
    }
    while(q--) {
        int l,r;
        cin>>l>>r;
        r = min(mx,r);
        if(l>mx) cout<<0<<endl;
        else {
            cout<<dif[r]-dif[l-1]<<endl;
        }
    }
    return 0;
}

/*
    90 91 92 93 94 95 96 97 98 99 100
        1           -1
           1                 -1
                         1          -1
    0   1  1 0  0  -1 0  1   -1 0   -1
    0 1 2 2 2 1 1 2 1 1 0
*/
