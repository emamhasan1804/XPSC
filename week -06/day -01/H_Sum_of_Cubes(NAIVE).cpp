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
    vector<int> v;
    map<int,int> mp;
    for(int i=1;i<=10000;i++) {
        int x = pow(i,3);
        v.push_back(x);
        mp[x]++;
    }
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        bool flag = false;
        for(int i:v) {
            if(i>n) break;
            else  if(mp[n-i]>0) {
                cout<<"YES"<<endl;
                flag = true;
                break;
            }
        }
        if(!flag) cout<<"NO"<<endl;
    }
    return 0;
}
