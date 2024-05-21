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
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int cnt = 0;
    for(int i=1;i<n;i++) {
        if(v[i]<v[i-1]) {
            int x = v[i-1]-v[i];
            v[i]+=x;
            cnt+=x;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
