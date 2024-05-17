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
        int n,m;
        cin>>n>>m;
        int k = n/2;
        int l = m+1;
        for(int i=1;i<=k;i++) {
            int cnt = 0;
            for(int j=l;cnt<m;j++) {
                cout<<j<<" ";
                cnt++;
            }
            l+=m+m;
            cout<<endl;
        }
        l=1;
        for(int i=1;i<=n-k;i++) {
            int cnt = 0;
            for(int j=l;cnt<m;j++) {
                cout<<j<<" ";
                cnt++;
            }
            l+=m+m;
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
