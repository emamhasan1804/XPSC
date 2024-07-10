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
        string s;
        cin>>s;
        int ans = INT_MAX;
        for(char c='a';c<='z';c++) {
            vector<int> temp;
            int i=0;
            while(i<s.size()) {
                if(s[i]!=c) {
                    int cnt = 0;
                    while(i<s.size() && s[i]!=c) {
                        cnt++;
                        i++;
                    }
                    temp.push_back(cnt);
                }
                i++;
            }
            int count = 0;
            for(int it:temp) {
                for(int i=1;i<=30;i++) {
                    int x = pow(2,i);
                    if(it<x) {
                        count = max(count,i);
                        break;
                    }
                }
            }
            ans = min(ans,count);
        }
        cout<<ans<<endl;
    }
    return 0;
}
