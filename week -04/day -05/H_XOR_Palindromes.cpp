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
        vector<char> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        int cnt = 0;
        for(int i=0;i<n/2;i++) {
            if(v[i] != v[n-1-i]) cnt++;
        }
        int ans[n+1];
        memset(ans,0,sizeof(ans));
        for(int i=cnt;i<=n-cnt; (n%2==0)? i+=2:i++) {
            ans[i]=1;
        }
        for(int i=0;i<n+1;i++) {
            cout<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}