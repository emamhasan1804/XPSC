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
        for(int i=1;i<=n;i++) cin>>v[i];
        vector<int> temp(n+1);
        if(n!=v[1]) {
            cout<<"NO"<<endl;
            continue;
        }
        map<int,int> mp;
        int cnt = 0;
        for(int i=n;i>0;i--) {
            int x = v[i]-cnt;
            if(x>0) {
                mp[i] = x;
                cnt += x;
            }
        }
        bool flag = true;
        for(int i=1;i<=n;i++) {
            if(mp[v[i]]==0) {
                flag= false;
                break;
            }
            mp[v[i]]--;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
