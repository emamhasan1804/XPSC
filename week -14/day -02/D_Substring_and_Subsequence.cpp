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
        int ans = 0;
        int k = a.size();
        int l=0,r=0;
        int n = b.size();
        deque<char> s;
        if(b.size()<a.size()) {
            cout<<"-"<<endl;
            continue;
        }
        while(r<n) {
            s.push_back(b[r]);
            if(r-l+1==k) {
                int cnt = 0;
                map<int,int> mp;
                for(char c:s) {
                    for(int i=0;i<a.size();i++) {
                        if(a[i]==c && mp[i]==0) {
                            cnt++;
                            mp[i]=1;
                            break;
                        }
                    }
                }
                ans = max(cnt,ans);
                s.pop_front();
                l++;
            }
            r++;
        }
        cout<<ans<<endl;
    }
    return 0;
}

/*
   cde
   abcbdoe
*/
