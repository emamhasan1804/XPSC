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
        string s,ans;
        cin>>n>>s;
        for(int i=0;i<n;i++) {
            s[i]=tolower(s[i]);
        }
        map<char,int> mp;
        bool flag = true;
        for(char c:s) {
            if(mp[c]==0) {
                ans+=c;
                mp[c]++;
            }
            else {
                if(ans.back()!=c) {
                    flag = false;
                    break;
                }
            }
        }
        if(!flag) cout<<"NO"<<endl;
        else {
            if(ans=="meow") cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
    return 0;
}