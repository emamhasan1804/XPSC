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
        string a,b;
        cin>>a>>b;
        int cnt = 0;
        int n = a.size(),m=b.size();
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(a[i]==b[j]) {
                    int cc = 0;
                    int x = i;
                    int y = j;
                    while(x<n && j<m && a[x]==b[y]) {
                        cc++;
                        x++;
                        y++;
                    }
                    cnt = max(cnt,cc);
                }
            }
        }
        cout<<n+m-(2*cnt)<<endl;
    }
    return 0;
}
