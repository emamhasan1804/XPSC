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
        int a,b,c;
        cin>>a>>b>>c;
        if(b%3!=0 && (b+c)/3 == b/3) cout<<-1<<endl;
        else {
            int cnt = a;
            if(b%3==0) cnt +=b/3;
            else if((b+1)%3==0) {
                cnt += (b+1)/3;
                c--;
            }
            else if((b+2)%3==0) {
                cnt += (b+2)/3;
                c-=2;
            }
            cnt += c/3;
            cnt += (c%3)/2;
            cnt += (c%3)%2;
            cout<<cnt<<endl;
        }
    }
    return 0;
}
