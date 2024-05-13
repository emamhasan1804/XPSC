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
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            int x = v[i];
            for(int j=2;j<=sqrt(x);j++) {
                if(x%j==0) {
                    while(x%j==0) {
                        mp[j]++;
                        x/=j;
                    }
                }
            }
            if(x>1) mp[x]++;
        }
        bool flag = true;
        for(auto it:mp) {
            if(it.second%n!=0) {
                flag= false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
