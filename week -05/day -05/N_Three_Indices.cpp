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
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        bool flag = false;
        for(int i=1;i<n-1;i++) {
            if(v[i]>v[i-1] && v[i]>v[i+1]) {
                flag = true;
                cout<<"YES"<<endl<<i<<" "<<i+1<<" "<<i+2<<endl;
                break;
            }
        }
        if(!flag) cout<<"NO"<<endl;
    }
    return 0;
}
