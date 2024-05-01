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
        int h,n;
        cin>>h>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int cat = 0;
        int cnt = 0;
        for(int i=n-1;i>=0;i--) {
            if(cat<v[i]) {
                cnt ++;
                cat = cat + (h-v[i]);
            }
            else break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
