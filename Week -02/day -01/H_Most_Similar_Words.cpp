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
        vector<string> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        int mx = INT_MAX;
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                int cnt = 0;
                for(int k=0;k<m;k++) {
                    cnt += abs((v[i][k])-v[j][k]);
                }
                if(cnt<mx) mx = cnt;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}