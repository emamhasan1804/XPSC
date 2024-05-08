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
    int t;cin>>t;while(t--) 
    {
        int n,q;
        cin>>n>>q;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++) {
            cin>>v[i];
        }
        int last = 31;
        while(q--) {
            int vl;
            cin>>vl;
            if(vl<last) {
                for(int i=1;i<=n;i++) {
                    int x = pow(2,vl);
                    int y = pow(2,vl-1);
                    if(v[i]%x==0) {
                        v[i]+=y;
                    }
                }
                last = vl;
            }
        }
        for(int i=1;i<=n;i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
