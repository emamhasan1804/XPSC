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
        string a,b;
        cin>>a>>b;
        int ans=0;
        for(int i=0;i<b.size();i++) {
            int st = i;
            int cnt = 0;
            for(int j=0;j<a.size() && st<b.size();j++) {
                if(b[st]==a[j]) {
                    st++;
                    cnt++;
                }
            }
            ans = max(ans,cnt);
        }
        cout<<a.size()+b.size()-ans<<endl;
    }
    return 0;
}
