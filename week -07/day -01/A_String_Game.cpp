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
        string s;
        cin>>s;
        int cnt1 = 0,cnt2=0;
        for(char c:s) {
            if(c=='1') cnt1++;
            else cnt2++;
        }
        if((min(cnt1,cnt2))%2==0) cout<<"Ramos"<<endl;
        else cout<<"Zlatan"<<endl;
    }
    return 0;
}
