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
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==1) cout<<j;
            else if(j==1) cout<<i;
            else if(j==n) cout<<j;
            else if(i==n) cout<<i;
            else cout<<" ";
        }

        cout<<endl;
    }
    return 0;
}