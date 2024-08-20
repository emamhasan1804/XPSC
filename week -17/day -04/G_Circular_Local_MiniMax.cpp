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
        vector<int> v(n),ans;
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        if(n%2) cout<<"NO"<<endl;
        else {
            sort(v.begin(),v.end());
            bool flag = true;
            for(int i=0;i<n/2;i++) {
                ans.push_back(v[i]);
                ans.push_back(v[n/2+i]);
            }
            ans.push_back(ans[0]);
            ans.push_back(ans[1]);
            for(int i=1;i<=n;i++) {
                if(ans[i]>ans[i-1] && ans[i]>ans[i+1]) continue;
                if(ans[i]<ans[i-1] && ans[i]<ans[i+1]) continue;
                flag = false;
                break;
            }
            if(flag) {
                cout<<"YES"<<endl;
                for(int i=0;i<n;i++) cout<<ans[i]<<" ";
                cout<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
