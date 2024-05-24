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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
        v[i]%=n;
    }
    int sum = 0;
    int cnt = 0;
    map<int,int> mp;
    mp[0]=1;
    for(int i=0;i<n;i++) {
        sum += v[i]%n;
        if(sum<0) sum+=n;
        sum%=n;
        cnt += mp[sum];
        mp[sum]++;
    }
    cout<<cnt<<endl;
    return 0;
}
