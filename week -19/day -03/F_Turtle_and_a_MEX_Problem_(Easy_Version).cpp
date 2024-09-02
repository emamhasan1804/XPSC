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

map<int,int> mp;

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n,m;
        cin>>n>>m;
        int mx = 0;
        for(int i=0;i<n;i++) {
            mp.clear();
            int k;
            cin>>k;
            for(int i=0;i<k;i++) {
                int vl;cin>>vl;
                mp[vl]++;
            }
            int ans ;
            int cnt = 0;
            for(int i=0; ; i++) {
                if(mp[i]==0) cnt++;
                if(cnt==2) {
                    ans = i;
                    break;
                }
            }
            if(ans>mx) mx = ans;
        }
        if(mx>=m) {
            cout<<(m+1)*mx<<endl;
        }
        else {
            int ans = (mx+1)*mx;
            ans+=( (m*(m+1))/2 ) - ( (mx*(mx+1))/2);
            cout<<ans<<endl;
        }
    }
    return 0;
}
