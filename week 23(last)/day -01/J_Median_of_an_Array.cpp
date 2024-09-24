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
        int k;
        if(n%2==0) k=n/2;
        else k=n/2+1;
        int cnt = 1;
        k--;
        // cout<<k<<endl;
        sort(v.begin(),v.end());
        v[k]++;
        for(int i=k+1;i<n;i++) {
            while(v[i]<v[i-1]) {
                cnt ++;
                v[i]++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
