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
        int cnt = 0;
        for(int i=0;i<n-2;i++) {
            string temp ;
            temp+= s[i];temp+=s[i+1];temp+=s[i+2];
            if(temp=="map") {
                cnt++;
                if(i+2+2<n) {
                    if(s[i+3]=='i' && s[i+4]=='e') cnt--;
                }
            }
            else if(temp=="pie") {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
