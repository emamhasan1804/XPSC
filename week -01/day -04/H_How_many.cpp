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
    int s,m;
    cin>>s>>m;
    int cnt = 0;
    for(int i=0;i<=s;i++) {
        for(int j=0;j<=s-i;j++) {
            for(int k=0;k<=s-i-j;k++) {
                if(i*j*k<=m) cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}