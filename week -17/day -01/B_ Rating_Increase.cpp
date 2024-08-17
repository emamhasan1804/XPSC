#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main () 
{
    int t;cin>>t;while(t--) 
    {
        string s;
        cin>>s;
        int a,b=0;
        a=s[0]-'0';
        for(int i=1;i<s.size();i++) {
            if(s[i]=='0') {
                if(b==0) {
                    a=(a*10)+(s[i]-'0');
                }
                else b=(b*10)+(s[i]-'0');
            }
            else {
                b=(b*10)+(s[i]-'0');
            }
        }
        if(b>a)cout<<a<<" "<<b<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
