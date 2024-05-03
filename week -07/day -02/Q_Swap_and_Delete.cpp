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
        for(char i:s) {
            mp[i]++;
        }
        int cnt = 0;
        for(char c:s) {
            if(c=='1') {
                if(mp['0']>0) {
                    cnt ++;
                    mp['0']--;
                }
                else break;
            }
            else {
                if(mp['1']>0) {
                    cnt ++;
                    mp['1']--;
                }
                else break;
            }
        }
        cout<<s.size()-cnt<<endl;
    }
    return 0;
}
