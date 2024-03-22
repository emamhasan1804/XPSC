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
        int n;cin>>n;
        string a,b;
        cin>>a>>b;
        bool flag = true;
        for(int i=0;i<n;i++){
            if(a[i]=='R') {
                if(b[i]!='R') {
                    flag  = false;
                    break;
                }
            }
            else {
                if(b[i]=='B' || b[i]=='G') {
                    // flag = false;
                    // break;
                }
                else {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}