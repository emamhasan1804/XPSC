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
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        int k = a*n;
        if(k<=s) s-=k;
        else {
            s = s%n;
        }
        if(b>=s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
