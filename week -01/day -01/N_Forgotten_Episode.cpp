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
    map<int,int> mp;
    int v;
    while(cin>>v) {
        mp[v]++;
    }
    for(int i=1;i<=n;i++) {
        if(mp[i]==0) {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}