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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    map<int,int> mp;
    int l=0,r=0,cnt=0,sum=0;
    while(r<n) {
        mp[v[r]]++;
        if(mp[v[r]]==1) sum++;
        if(sum<=k) {
            if(sum!=0) cnt+=r-l+1;
            r++;
        }
        else {
            while(sum>k) {
                if(mp[v[l]]==1) sum--;
                mp[v[l]]--;
                l++;
            }
            if(sum!=0) cnt+=r-l+1;
            r++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}