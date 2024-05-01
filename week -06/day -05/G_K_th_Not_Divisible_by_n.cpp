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
        int n,k;
        cin>>n>>k;
        int x = k/n;
        k += x;
        while(true) {
            int y = k/n;
            if(y>x) {
                k += y-x;
                x = y;
            }
            else break;
        }
        cout<<k<<endl;
    }
    return 0;
}
/*

*/
