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
        string s;
        cin>>n>>s;
        int cntz=0,cnto=0;
        if(s[0]=='1') cnto++;
        else if(s[0]=='0')  cntz++;
        for(int i=1;i<n;i++) {
            if(s[i]=='1') cnto++;
            else if(s[i]=='0') {
                if(s[i-1]=='1') cntz++;
            }
        }
        if(cnto>cntz) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
