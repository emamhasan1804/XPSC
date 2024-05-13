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
    int mn = LLONG_MAX;
    int a=1,b=1;
    for(int i=1;i<=sqrt(n);i++) {
        if(n%i==0) {
            if(n/i!=i) {
                int j=n/i;
                if(lcm(i,j)!=n) continue;
                int k = max(i,j);
                if(k<mn) {
                    mn = k;
                    a=i;
                    b=j;
                }
            }
        }
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
