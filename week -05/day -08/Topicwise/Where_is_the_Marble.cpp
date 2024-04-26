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
    int j = 1;
    while(true) {
        int n,q;
        cin>>n>>q;
        if(n==0 && q==0) break;
        cout<<"CASE# "<<j<<":"<<endl;
        j++;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        while(q--) {
            int k;
            cin>>k;
            auto it = lower_bound(v.begin(),v.end(),k);
            if(*it==k && it!=v.end()) {
                cout<<k<<" found at ";
                cout<<it-v.begin()+1<<endl;
            }
            else cout<<k<<" not found"<<endl;
        }
    }
    return 0;
}
