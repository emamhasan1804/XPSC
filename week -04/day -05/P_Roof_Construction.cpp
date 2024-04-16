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
        int mx = INT_MIN;
        int j = 0;
        for(int i=0;i<n-1;i++) {
            if((i^(i+1))>mx) {
                mx =(i^(i+1));
                j=i;
            }
        }
        if(j==0) cout<<j<<" ";
        for(int i=1;i<n;i++) {
            cout<<i<<" ";
            if(i==j) cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
