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
    int n;
    cin>>n;
    cout<<n/2<<endl;
    int temp = n;
    for(int i=1;i<n/2;i++) {
        cout<<2<<" ";
        temp-=2;
    }
    cout<<temp<<endl;
    return 0;
}
