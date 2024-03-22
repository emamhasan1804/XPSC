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
    string s,t;
    cin>>s>>t;
    int cnt = 0;
    for(int i=0;i<s.size();i++) {
        if(s[i]!=t[i]) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}