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
        int ans= n;
        for(char c='a';c<='z';c++) {
            int l=0,r=n-1,cnt=0;
            while(l<=r) {
                if(s[l]==s[r]) {
                    l++;
                    r--;
                }
                else if(s[l]==c) {
                    cnt ++;
                    l++;
                }
                else if(s[r]==c) {
                    cnt++;
                    r--;
                }
                else {
                    cnt = n;
                    break;
                }
            }
            ans = min(ans,cnt);
        }
        if(ans==n) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
/*


*/
