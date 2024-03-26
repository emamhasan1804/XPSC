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
    int l=0,r=0,cnt=0,sum=0;
    multiset<int> s;
    while(r<n) {
        s.insert(v[r]);
        int mn = * s.begin();
        int mx = * s.rbegin();
        if(mx-mn<=k) {
            cnt += r-l+1;
            r++;
        }
        else {
            while(l<r) {
                mn = * s.begin();
                mx = * s.rbegin();
                if(mx-mn<=k) {
                    break;
                }
                auto it = s.find(v[l]);
                s.erase(it);
                l++;
            }
            mn = * s.begin();
            mx = * s.rbegin();
            if(mx-mn<=k) {
                cnt += r-l+1;
            }
            r++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}