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
        char c;
        cin>>c;
        string s;
        cin>>s;
        if(c=='g') {
            cout<<0<<endl;
            continue;
        }
        int mx = INT_MIN;
        int c1 = 0;
        for(int i=0;i<n;i++) {
            c1 ++;
            if(s[i]=='g') break;
        }
        for(int i=0;i<n;i++) {
            if(s[i]==c) {
                bool flag = false;
                int cnt = 0;
                for(int j=i+1;j<n;j++) {
                    cnt ++;
                    if(s[j]=='g') {
                        flag = true;
                        break;
                    }
                }
                if(flag) {
                    if(cnt>mx) mx = cnt;
                }
                else {
                    if(cnt+c1>mx) mx = cnt+c1;
                }
                i+=cnt;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}