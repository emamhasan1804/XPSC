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
        string a,b;
        cin>>a>>b;
        if(a==b) cout<<"YES"<<endl;
        else if(a.front()=='1') cout<<"YES"<<endl;
        else if(find(a.begin(),a.end(),'1')==a.end()) cout<<"NO"<<endl;
        else {
            int cnt = 0;
            int l=0;
            while(l<n && a[l]=='0') {
                cnt++;
                l++;
            }
            int cnt2=0;
            l=0;
            while(l<n && b[l]=='0') {
                cnt2++;
                l++;
            }
            if(cnt<=cnt2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
