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
    int k,s;
    cin>>k>>s;
    int cnt = 0;
    for(int i=0;((i<=s && (i<=k)));i++) {
        for(int j=0;((j<=s-i) && (j<=k));j++) {
            if(s-i-j<=k) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
