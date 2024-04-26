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
    vector<int> v(100005);
    for(int i=1;i<=100005;i++) {
        v[i]=pow(i,3);
    }
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        bool flag = false;
        for(int i=1;i<100005;i++) {
            if(v[i]>=n) break;
            int x = n - v[i];
            int l=0,r=100005,mid;
            while(l<=r) {
                mid = (r+l)/2;
                if(v[mid]==x) {
                    flag = true;
                    break;
                }
                else if(v[mid]>x) {
                    r = mid-1;
                }
                else l = mid+1;
            }
            if(flag) break;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
