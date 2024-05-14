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
        int gcd1=v.front();
        for(int i=2;i<n;i+=2) {
            gcd1=gcd(gcd1,v[i]);
        }
        int gcd2=v[1];
        for(int i=3;i<n;i+=2) {
            gcd2=gcd(gcd2,v[i]);
        }
        bool flag = true;
        for(int i=1;i<n;i+=2) {
            if(v[i]%gcd1==0) {
                flag = false;
                break;
            }
        }
        if(flag) cout<<gcd1<<endl;
        else {
            bool flag = true;
            for(int i=0;i<n;i+=2) {
                if(v[i]%gcd2==0) {
                    flag = false;
                    break;
                }
            }
            if(flag) cout<<gcd2<<endl;
            else cout<<0<<endl;
        }
    }
    return 0;
}
