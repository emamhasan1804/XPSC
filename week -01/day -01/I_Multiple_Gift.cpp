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
    int a,b;
    cin>>a>>b;
    int cnt = 0;
    for(int i=a;i<=b;i=i*2) {
        cnt ++;
    }
    cout<<cnt<<endl;
    return 0;
}