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
        int a,b;
        cin>>a>>b;
        if(a==b) {
            int x = (a-1)*(a-1);
            cout<<x+a<<endl;
        }
        else if(a>b) {
            int x = (a-1)*(a-1);
            if(x%2==0) {
                x+=b;
            }
            else {
                x = a*a -b+1;
            }
            cout<<x<<endl;
        }
        else {
            int x = (b-1)*(b-1);
            if(x%2==0) {
                x = b*b -a+1;
            }
            else {
                x+=a;
            }
            cout<<x<<endl;
        }
    }
    return 0;
}
