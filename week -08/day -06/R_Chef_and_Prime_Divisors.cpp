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
    int t;cin>>t;while(t--) 
    {
        int a,b;
        cin>>a>>b;
        while(gcd(a,b)!=1) {
            int x = gcd(a,b);
            b/=x;
            if(b==1) break;
        }
        if(b==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
