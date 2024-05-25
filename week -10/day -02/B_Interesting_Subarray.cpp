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
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        bool flag = false;
        int ind;
        for(int i=1;i<n;i++) {
            if(abs(v[i]-v[i-1])>1) {
                flag = true;
                ind = i;
                break;
            }
        }
        if(!flag) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            cout<<ind<<" "<<ind+1<<endl;
        }
    }
    return 0;
}
