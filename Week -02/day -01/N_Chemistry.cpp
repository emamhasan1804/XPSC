#include<bits/stdc++.h>
#define int long long
#define float double
using namespace std;
 
int32_t main () 
{
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(n==1) {
            cout<<"YES"<<endl;
        }
        else{
            map<char,int> mp;
            for(char c:s) {
                mp[c]++;
            }
            int oddc=0;
            for(auto it:mp) {
                if(it.second%2!=0) oddc++;
            }
            if(oddc<=k+1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}