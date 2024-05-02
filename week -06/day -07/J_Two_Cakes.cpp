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
    int n,a,b;
    cin>>n>>a>>b;
    int cnt;
    for(int i=1;i<=min(a,b);i++) {
        if(a/i+b/i>=n) {
            cnt = i;
        }
        else break;
    }
    cout<<cnt<<endl;
    return 0;
}
