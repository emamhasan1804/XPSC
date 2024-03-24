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
    int l=0,r=0,sum=0,cnt=0;
    while(r<n) {
        sum += v[r];
        if(sum<=k) {
            cnt += r-l+1;
            r++;
        }
        else {
            while(sum>k) {
                sum -= v[l];
                l++;
            }
            cnt += r-l+1;
            r++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}