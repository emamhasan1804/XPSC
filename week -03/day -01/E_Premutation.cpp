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
        int ar[n][n-1];
        for(int i=0;i<n;i++) {
            for(int j=0;j<n-1;j++) {
                cin>>ar[i][j];
            }
        }
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            mp[ar[i][0]]++;
        }
        int mx = 0;
        int vl = 0;
        for(auto it:mp) {
            if(it.second>mx) {
                mx=it.second;
                vl=it.first;
            }
        }
        for(int i=0;i<n;i++) {
            if(ar[i][0]!=vl) {
                cout<<vl<<" ";
                for(int j=0;j<n-1;j++) {
                    cout<<ar[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}