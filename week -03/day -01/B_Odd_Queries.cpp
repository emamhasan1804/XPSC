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
        int ar[n];
        for(int i=0;i<n;i++) cin>>ar[i];
        int pre[n];
        pre[0]=ar[0];
        for(int i=1;i<n;i++) pre[i]=pre[i-1]+ar[i];
        while(q--) {
            int l,r,val;
            cin>>l>>r>>val;
            l--;r--;
            int sum = 0;
            if(l!=0) sum = pre[n-1]-(pre[r]-pre[l-1]);
            else sum = pre[n-1]-pre[r];
            sum += val*(r-l+1);
            (sum%2==0)? cout<<"NO"<<endl: cout<<"YES"<<endl;
        }
    }
    return 0;
}