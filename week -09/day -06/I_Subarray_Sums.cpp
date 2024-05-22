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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int l=0,r=0,sum=0,ans=0;
    while(r<n) {
        sum +=v[r];
        if(sum==k) {
            ans++;
            sum-=v[l];
            l++;
            r++;
        }
        else if(sum>k) {
            while(sum>k) {
                sum-=v[l];
                l++;
            }
            if(sum==k) {
                ans++;
            }
            r++;
        }
        else r++;
    }
    cout<<ans<<endl;
    return 0;
}
