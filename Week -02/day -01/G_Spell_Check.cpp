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
    string s = "Timur";
    int t;cin>>t;while(t--) 
    {
        int k;cin>>k;
        string n;
        cin>>n;
        bool flag = true;
        if(n.size()!=s.size()) {
            flag = false;
        }
        else {
            map<char,int> mp;
            for(char c:n) {
                mp[c]++;
            }
            for(char c:s) {
                if(mp[c]!=1) {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}