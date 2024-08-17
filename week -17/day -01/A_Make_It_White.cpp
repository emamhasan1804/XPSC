#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main () 
{
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int si=0;
        for(int i=0;i<n;i++) {
            if(s[i]=='B') {
                si=i;
                break;
            }
        }
        int sj;
        for(int i=n-1;i>=0;i--) {
            if(s[i]=='B') {
                sj=i;
                break;
            }
        }
        cout<<sj-si+1<<endl;
    }
    return 0;
}
