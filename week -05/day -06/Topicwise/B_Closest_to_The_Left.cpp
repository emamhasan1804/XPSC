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
    while(k--) {
        int vl;
        cin>>vl;
        int l=0,r=n-1;
        int ind =-1;
        while(l<=r) {
            int mid = (r+l)/2;
            if(v[mid]<=vl) {
                ind = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        ind++;
        cout<<ind<<endl;
    }
    return 0;
}
