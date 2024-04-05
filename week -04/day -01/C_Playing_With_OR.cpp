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
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        int l=0,r=0,cnt = 0,sum=0;
        while(r<n) {
            if(v[r]%2==1) sum++;
            if(r-l+1==k) {
                if(sum>0) cnt++;
                if(v[l]%2==1) sum --;
                l++;
            }
            r++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

/*
    

*/