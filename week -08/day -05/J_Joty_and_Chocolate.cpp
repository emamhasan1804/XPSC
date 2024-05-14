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
    int n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    int cnt1 = n/a;
    int cnt2 = n/b;
    int cnt3;
    if(lcm(a,b)<=n) {
        int x = lcm(a,b);
        cnt3 = n/x;
    }
    else cnt3=n/(a*b);
    cnt1-=cnt3;
    cnt2-=cnt3;
    cout<<cnt1*p+cnt2*q+cnt3*(max(p,q))<<endl;
    return 0;
}
