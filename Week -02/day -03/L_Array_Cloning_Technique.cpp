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
        int n;
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            int vl;
            cin>>vl;
            mp[vl]++;
        }
        int ase = 0;
        for(auto it:mp) {
            if(it.second>ase) {
                ase = it.second;

            }
        }
        if(ase==n) cout<<0<<endl;
        else if(ase>=ceil((float)n/2)) cout<<1+n-ase<<endl;
        else {
            int cnt = 0;
            while(ase<n) {
                // cout<<ase<<" -> "<<cnt<<"    ";
                // cout<<ase<<" ";
                cnt++;
                int baki = n-ase;
                // cout<<baki<<" ";
                if(baki>=ase) {
                    cnt += ase;
                    ase += ase;
                }
                else {
                    cnt += baki;
                    ase += baki;
                }
            }
            // cout<<ase<<" "<<endl;
            cout<<cnt<<endl;
        }
    }
    return 0;
}