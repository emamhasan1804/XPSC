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
    vector<bool> temp(30001,true);
    for(int i=2;i<=sqrt(30000);i++) {   
        if(temp[i]) {
            for(int j=i+i;j<=30000;j+=i) {
                temp[j]=false;
            }
        }
    }
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        int a = 1;
        int b = 1+n;
        while(temp[b]!=true) {
            b++;
        }
        int c = b+n;
        while(temp[c]!=true) {
            c++;
        }
        cout<<b*c<<endl;
    }
    return 0;
}
