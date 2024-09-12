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
    int cs =1;
    int t_c;cin>>t_c;while(t_c--) 
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> even(26),odd(26);
        if(s.size()%2==0) {
            int mxodd=0,mxeven=0;
            for(int i=0;i<n;i++) {
                if(i%2) {
                    odd[s[i]-'a']++;
                    mxodd = max(mxodd,odd[s[i]-'a']);
                }
                else {
                    even[s[i]-'a']++;
                    mxeven = max(mxeven,even[s[i]-'a']);
                }
            }
            cout<<n-mxeven-mxodd<<endl;
        }
        else {
            even.clear();odd.clear();
            even.resize(n);odd.resize(n);
            map<int,map<char,int>> pre_even,pre_odd;
            even.clear();odd.clear();
            for(int i=0;i<n;i++) {
                for(char c='a';c<='z';c++) {
                    pre_even[i][c]=even[c-'a'];
                }
                for(char c='a';c<='z';c++) {
                    pre_odd[i][c]=odd[c-'a'];
                }
                if(i%2==0) even[s[i]-'a']++;
                else odd[s[i]-'a']++;
            }
            map<char,int> ev,od;
            map<int,map<char,int>> suf_even,suf_odd;
            for(int i=n-1;i>=0;i--) {
                for(char c='a';c<='z';c++) {
                    suf_even[i][c]=ev[c];
                }
                for(char c='a';c<='z';c++) {
                    suf_odd[i][c]=od[c];
                }
                if(i%2==0) ev[s[i]]++;
                else od[s[i]]++;
            }
            int ans = 0;
            for(int i=0;i<n;i++) {
                int x = 0;
                for(char c ='a';c<='z';c++) {
                    x = max((suf_even[i][c]+pre_odd[i][c]),x);
                }
                int y = 0;
                for(char c ='a';c<='z';c++) {
                    y = max((suf_odd[i][c]+pre_even[i][c]),y);
                }
                ans = max(ans,(x+y));
            }
            cout<<n-ans<<endl;
        }
    }
    return 0;
}
