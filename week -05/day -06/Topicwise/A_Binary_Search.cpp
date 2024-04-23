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
    int q;cin>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    while( q--) {
        int vl;
        cin>>vl;
        int l=0,r=n-1;
        bool flag = false;
        while(l<=r) {
            int mid = (l+r)/2;
            if(v[mid]==vl) {
                flag = true;
                break;
            }
            else if(vl>v[mid]) {
                l = mid +1;
            }
            else r = mid -1;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
