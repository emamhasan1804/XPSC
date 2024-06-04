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
        string s;
        cin>>s;
        unordered_map<int,int> flag;
        int cost = 0;
        for(int i=0;i<n;i++) {
            if(s[i]=='0') {
                for(int j=i+1;j<=n;j+=i+1) {
                    if(s[j-1]=='1') break;
                    if(flag[j-1]==1) continue;
                    flag[j-1]=1;
                    cost += i+1;
                }
            }
        }
        cout<<cost<<endl;
    }
    return 0;
}
