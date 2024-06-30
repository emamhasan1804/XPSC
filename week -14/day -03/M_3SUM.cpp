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
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            int vl;
            cin>>vl;
            mp[vl%10]++;
        }
        // for(auto it:mp) cout<<it.first<<" "<<it.second<<"    ";
        vector<int> hello = {3,13,23};
        bool flag = false;
        for(int i:hello) {
            // cout<<i<<endl;
            for(int a=0;a<=i;a++) {
                for(int b=0;b<=i-a;b++) {
                    int c = i-a-b;
                    // cout<<a<<" - "<<mp[a]<<" "<<b<<" -"<<mp[b]<<" "<<c<<" -"<<mp[c]<<endl;
                    if(mp[a]>0) {
                        mp[a]--;
                        if(mp[b]>0) {
                            mp[b]--;
                            if(mp[c]>0) {
                                // cout<<a<<" "<<b<<" "<<c<<endl;
                                flag = true;
                            }
                            mp[b]++;
                        }
                        mp[a]++;
                    }
                }
            }
            // cout<<endl;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
