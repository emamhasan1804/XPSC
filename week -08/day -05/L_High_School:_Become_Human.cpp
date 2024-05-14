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
    if(a==b) cout<<'='<<endl;
    else if(a==1) cout<<'<'<<endl;
    else if(b==1) cout<<'>'<<endl;
    else if(a==2) {
        if(b>4) cout<<'>'<<endl;
        else if(b==4) cout<<'='<<endl;
        else cout<<'<'<<endl;
    }
    else if(b==2) {
        if(a>4) cout<<'<'<<endl;
        else if(a==4) cout<<'='<<endl;
        else cout<<'>'<<endl;
    }
    else if(a<b) cout<<'>'<<endl;
    else cout<<'<'<<endl;
    return 0;
}
