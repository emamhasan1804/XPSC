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
        int cars,outlet,time;
        cin>>cars>>outlet>>time;
        vector<int> capacity(cars);
        vector<int> power(outlet);
        for(int i=0;i<cars;i++) {
            cin>>capacity[i];
        }
        for(int i=0;i<outlet;i++) {
            cin>>power[i];
        }
        sort(capacity.begin(),capacity.end(),greater<int>());
        sort(power.begin(),power.end(),greater<int>());
        int sum = 0;
        int r=0;
        while(r<cars && r<outlet) {
            int k = power[r]*time;
            if(k>=capacity[r]) {
                sum += capacity[r];
            }
            else {
                sum += k;
            }
            r++;
        }
        cout<<sum<<endl;
    }
    return 0;
}