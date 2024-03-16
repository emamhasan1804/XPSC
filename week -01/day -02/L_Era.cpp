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
        int ar[n+1];
        for(int i=1;i<=n;i++) {
            cin>>ar[i];
        }
        int ft = 0;
        int cnt = 0;
        for(int i=1;i<=n;i++) {
            if(i+cnt<ar[i]) {
                cnt += ar[i]-i-cnt;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}