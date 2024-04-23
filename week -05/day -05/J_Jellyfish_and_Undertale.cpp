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
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        int cnt = b;
        for(int i=0;i<n-1;i++) {
            if(v[i]<a) {
                cnt +=v[i];
            }
            else if(v[i]>=a) {
                cnt += a-1;
            }
        }
        if(v[n-1]<a) {
            cnt +=v[n-1];
        }
        else if(v[n-1]>=a) {
            cnt += a-1;
        }
        cout<<cnt<<endl;
    }   
    return 0;
}
