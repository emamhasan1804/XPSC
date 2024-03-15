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
    int a,b,c;
    cin>>a>>b>>c;
    bool flag = false;
    for(int i=c;i<=b;i+=c) {
        if(i>=a && i<=b) {
            cout<<i<<endl;
            flag = false;
            break;
        }
        else flag = true;
    }
    if(flag) cout<<-1<<endl;
    return 0;
}