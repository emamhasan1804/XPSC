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
        int n,m,k;
        cin>>n>>m>>k;
        int suma = 0;
        int mxa=0,mna=LLONG_MAX,mxb=0,mnb=LLONG_MAX;
        for(int i=0;i<n;i++) {
            int vl;
            cin>>vl;
            suma+=vl;
            mxa = max(mxa,vl);
            mna = min(mna,vl);
        }
        for(int i=0;i<m;i++) {
            int vl;
            cin>>vl;
            mxb = max(mxb,vl);
            mnb = min(mnb,vl);
        }
        if(k%2==0) {
            suma -= mna;
            suma += max(mna,mxb);
            suma -= max(mxa,max(mna,mxb));
            suma += min(mna,mnb);
            cout<<suma<<endl;
        }
        else {
            suma -= mna;
            suma += max(mna,mxb);
            cout<<suma<<endl;
        }
    }
    return 0;
}
