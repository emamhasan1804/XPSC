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
    int n;
    cin>>n;
    stack<string> st;
    while(n--) {
        string s;
        cin>>s;
        st.push(s);
    }
    map<string,int> mp;
    string s;
    while(!st.empty()) {
        if(mp[st.top()]==0) {
            s+=st.top()[st.top().size()-2];
            s+=st.top()[st.top().size()-1];
            mp[st.top()]++;
        }
        st.pop();
    }
    cout<<s<<endl;
    return 0;
}