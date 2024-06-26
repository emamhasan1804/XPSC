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
    vector<string> vc;
    for(int i=0;i<=59;i++) {
        int x = pow(2,i);
        string s = to_string(x);
        vc.push_back(s);
    }
    int t;cin>>t;while(t--) 
    {
        string s;
        cin>>s;
        int ans = 1000;
        for(string a:vc) {
            int cnt = 0;
            int l=0,r=0;
            while(l<a.size() && r<s.size()) {
                if(a[l]==s[r]) {
                    cnt++;
                    l++;
                    r++;
                }
                else r++;
            }
            int x = a.size()-cnt;
            int p = s.size()-cnt;
            x+=p;
            ans = min(ans,x);
        }
        cout<<ans<<endl;
    }
    return 0;
}

/*

    1024
    91012


*/
