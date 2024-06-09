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
        vector<int> v(n+1);
        int pos = 0;
        for(int i=1;i<=n;i++) {
            cin>>v[i];
            if(v[i]>=0) pos++;
        }
        int ans = 0;
        for(int i=n;i>0;i--) {
            if(v[i]>=0) {
                if(i%2==1) {
                    ans += v[i];
                    pos--;
                }
                else if(pos>1) {
                    ans += v[i];
                    pos--;
                }
                else {
                    if(i>2) {
                        ans +=v[i];
                        break;
                    }
                    else {
                        ans += v[i];
                        int x = v[i];
                        x = min(x,abs(v[1]));
                        ans-=x;
                        break;
                    }
                }
            }
            else if(pos==0) break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
