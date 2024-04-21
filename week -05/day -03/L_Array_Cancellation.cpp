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
        int s = 0;
        for(int i=n-1;i>=0;i--) {
            if(v[i]<0) {
                s+=(-v[i]);
            }
            else if(v[i]>0) {
                if(v[i]>s) {
                    v[i]-=s;
                    s=0;
                }
                else if(v[i]<s) {
                    s-=v[i];
                    v[i]=0;
                }
                else {
                    v[i]=0;
                    s=0;
                }
            }
        }
        int cnt = 0;
        for(int i:v) {
            if(i>0) cnt+=i;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
