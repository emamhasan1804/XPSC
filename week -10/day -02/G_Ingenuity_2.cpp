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
        int a=0,b=0;
        map<char,int> mp;
        for(char c:s) {
            mp[c]++;
            if(c=='N') {
                a++;
            }
            else if(c=='S') {
                a--;
            }
            else if(c=='E') {
                b++;
            }
            else b--;
        }
        if(a%2!=0 || b%2!=0) cout<<"NO"<<endl;
        else if(a==0 && n==2 && (s!="SS" || s!="NN") && (s!="EE" && s!="WW")) cout<<"NO"<<endl;
        else if(b==0 && n==2 && (s!="EE" || s!="WW") && (s!="SS" && s!="NN")) cout<<"NO"<<endl;
        else {
            vector<int> north;
            vector<int> south;
            vector<int> east;
            vector<int> west;
            for(int i=0;i<n;i++) {
                if(s[i]=='N') north.push_back(i);
                else if(s[i]=='S') south.push_back(i);
                else if(s[i]=='E') east.push_back(i);
                else if(s[i]=='W') west.push_back(i);
            }
            vector<char> ans(n);
            for(int i=0;i<north.size();i++) {
                if(i<(north.size()+1)/2) ans[north[i]] = 'R';
                else ans[north[i]] = 'H'; 
            }
            for(int i=0;i<south.size();i++) {
                if(i<(south.size()+1)/2) ans[south[i]] = 'R';
                else ans[south[i]] = 'H'; 
            }
            for(int i=0;i<east.size();i++) {
                if(i<(east.size()+1)/2) ans[east[i]] = 'H';
                else ans[east[i]] = 'R'; 
            }
            for(int i=0;i<west.size();i++) {
                if(i<(west.size()+1)/2) ans[west[i]] = 'H';
                else ans[west[i]] = 'R'; 
            }
            for(char c:ans) cout<<c;
            cout<<endl;
        }
    }
    return 0;
}
