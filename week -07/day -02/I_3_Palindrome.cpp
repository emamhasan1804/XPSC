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
    int cnt = 0;
    for(int i=1;i<=n;i++) {
        if(cnt<2) {
            cout<<'a';
            cnt++;
        }
        else if(cnt<4) {
            cout<<'b';
            cnt++;
            if(cnt==4) cnt = 0;
        }
    }
    return 0;
}
