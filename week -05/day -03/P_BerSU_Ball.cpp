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
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        mp[v[i]]++;
    }
    int m;
    cin>>m;
    mp[0] = -1;
    int cnt = 0;
    vector<int> v1(m);
    for(int i=0;i<m;i++) {
        cin>>v1[i];
    }
    sort(v1.begin(),v1.end());
    for(int i=0;i<m;i++) {
        if(mp[v1[i]-1]>0) {
            cnt++;
            mp[v1[i]-1] --;
        }
        else if(mp[v1[i]]>0) {
            cnt++;
            mp[v1[i]] --;
        }
        else if(mp[v1[i]+1]>0) {
            cnt++;
            mp[v1[i]+1] --;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
