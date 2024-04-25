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
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int> ());
        vector<int> pre(n);
        pre[0]=v[0];
        for(int i=1;i<n;i++) {
            pre[i]=pre[i-1]+v[i];
        }
        while(q--) {
            int k;
            cin>>k;
            auto it = lower_bound(pre.begin(),pre.end(),k);
            int x = it-pre.begin();
            x++;   
            if(x>n) cout<<-1<<endl;
            else cout<<x<<endl;
        }
    }
    return 0;
}
