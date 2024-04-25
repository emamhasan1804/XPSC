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
    vector<int> pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++) {
        pre[i]=v[i]+pre[i-1];
    }
    int q;
    cin>>q;
    while(q--) {
        int k;
        cin>>k;
        auto it = lower_bound(pre.begin(),pre.end(),k);
        cout<<it-pre.begin()+1<<endl;
    }
    return 0;
}
