#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
const int mod = 1e9+7;
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
        int n,k;
        cin>>n>>k;
        stack<int> st;
        int sum = 0,l=1;
        while(k>0) {
            int x = k%2;
            if(x==1) {
                sum = (sum+l) %mod;
            }
            k/=2;
            l = (l*n)%mod;
        }
        cout<<sum<<endl;
    }
    return 0;
}
