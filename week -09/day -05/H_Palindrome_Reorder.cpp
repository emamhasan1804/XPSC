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
    string s;
    cin>>s;
    map<char,int> mp;
    for(char c:s) {
        mp[c]++;
    }
    int cnt = 0;
    for(auto it:mp) {
        if(it.second%2==1) {
            if(cnt==0) cnt++;
            else {
                cnt = -1;
                break;
            }
        }
    }
    if(cnt==-1) cout<<"NO SOLUTION"<<endl;
    else {
        char c;
        int cnt=-1;
        for(auto it:mp) {
            if(it.second%2==1) {
                c=it.first;
                cnt=it.second;
                break;
            }
        }
        string p;
        for(auto it:mp) {
            
            if(it.second%2==0) {
                for(int i=0;i<it.second/2;i++) {
                    p+=it.first;
                }
            }
        }
        string l=p;
        reverse(l.begin(),l.end());
        cout<<p;
        if(cnt!=-1) {
            for(int i=1;i<=cnt;i++) {
                cout<<c;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}
