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
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        int ind = -1;
        for(int i=n-1;i>=0;i--) {
            if(mp[v[i]]>0) {
                ind = i;
                break;
            }
            mp[v[i]]++;
        }
        cout<<ind+1<<endl;
    }
    return 0;
}   