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
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        // char c = 5-1 +'a';  // e;
        for(int i=n-1;i>=0;i--) {
            if(s[i]=='0') {
                int x = s[i-1]-'0';
                int y = s[i-2]-'0';
                int z = 10*y+x;
                z--;
                char a = z+'a';
                st.push(a);
                i-=2;
            }
            else {
                int x = s[i]-'1';
                char a = x+'a';
                st.push(a);
            }
        }
        while(!st.empty()) {
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
    return 0;
}
