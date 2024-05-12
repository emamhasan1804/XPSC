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
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++) {
        if(n%i==0) {
            v.push_back(i);
            if(n/i!=i) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    if(v.size()<k) cout<<-1<<endl;
    else {
        cout<<v[k-1]<<endl;
    }
    return 0;
}
