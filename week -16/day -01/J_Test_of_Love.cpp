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
        int n,m,k;
        cin>>n>>m>>k;
        string s;
        cin>>s;
        int l = -1;
        if(m>n) l=n;
        for(int i=m-1;i>=0;i--) {
            if(s[i]=='L') {
                l=i;
                break;
            }
        }
        if(l==-1) {
            for(int i=m-1;i>=0;i--) {
                if(s[i]=='W') {
                    l=i;
                    break;
                }
            }
        }
        if(l==-1) k=-1;
        while(l<n) {
            if(s[l]=='L') {
                if(l+m>=n) {
                    break;
                }
                int ind = 0;
                for(int i=l+1;i<=l+m;i++) {
                    if(s[i]=='L') ind = i;
                }
                if(ind==0) {
                    for(int i=l+1;i<=l+m;i++) {
                        if(s[i]=='W') ind = i;
                    }
                }
                if(ind==0) {
                    k=-1;
                    break;
                }
                l=ind;
            }
            else if(s[l]=='W') {
                l++;
                k--;
            }
            else {
                k=-1;
                break;
            }
        }
        if(k<0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
