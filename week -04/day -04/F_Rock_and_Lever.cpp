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
        vector<int> bin(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        for(int i=0;i<n;i++) {
            int x = v[i],cnt=0;
            while(x>0) {
                cnt++;
                x/=2;
            }
            mp[cnt]++;
            bin[i]=cnt;
        }
        int cnt = 0;
        for(int i=0;i<n-1;i++) {
            mp[bin[i]]--;
            if(mp[bin[i]]>0) cnt+=mp[bin[i]];
        }
        cout<<cnt<<endl;
    }
    return 0;
}