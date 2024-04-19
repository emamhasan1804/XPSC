#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
/* 
When I wrote this code ,
only Allah and I knew what I did.
   
Now... only Allah knows
*/

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        int cnt = 0;
        set<char> st;
        for(char c:s) {
            mp[c]++;
            st.insert(c);
        }
        for(char c:st) {
            if(mp[c]>=2) cnt++;
        }
        if(cnt>=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
