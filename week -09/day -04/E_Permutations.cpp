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
    if(n<4) cout<<"NO SOLUTION"<<endl;
    else {
        int k = n/2;
        for(int i=k+1;i<=n;i++) {
            cout<<i<<" ";
            int a = i-k;
            if(a<=k)cout<<a<<" ";
        }
    }
    cout<<endl;
    return 0;
}
