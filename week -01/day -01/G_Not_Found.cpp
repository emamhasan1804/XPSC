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
    string s;
    cin>>s;
    map<char,int> mp;
    for(char c:s) {
        mp[c]++;
    }
    bool flag = false;
    for(char c='a';c<='z';c++) {
        if(mp[c]==0) {
            cout<<c<<endl;
            flag = true;
            break;
        }
    }
    if(!flag) cout<<"None"<<endl;
    return 0;
}