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
    int a,b;
    cin>>a>>b;
    int ans = 0;
    if(a>b) {
        ans +=a;
        a--;
    }
    else {
        ans += b;
        b--;
    }
    if(a>b) {
        ans +=a;
    }
    else {
        ans += b;
    }
    cout<<ans<<endl;
    return 0;
}