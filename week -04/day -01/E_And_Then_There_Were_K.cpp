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
        int n;
        cin>>n;
        for(int i=1;i<=30;i++) {
            int k = pow(2,i);
            if(n<k) {
                k = pow(2,(i-1));
                cout<<k-1<<endl;
                break;
            }
        }
    }
    return 0;
}