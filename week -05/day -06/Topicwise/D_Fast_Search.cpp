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
    }
    int q;
    cin>>q;
    sort(v.begin(),v.end());
    while(q--) {
        int a,b;
        cin>>a>>b;
        if(a>b) swap(a,b);
        int l=0,r=n-1,ind = -1;
        while(l<=r) {
            int mid = (l+r)/2;
            if(v[mid]>=a) {
                ind = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        l=0,r=n-1;
        int ind1 =-1;
        while(l<=r) {
            int mid = (r+l)/2;
            if(v[mid]<=b) {
                ind1 = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        if(ind==-1 || ind1==-1 || ind>ind1) cout<<0<<" ";
        else cout<<ind1-ind+1<<" ";
    }
    return 0;
}
