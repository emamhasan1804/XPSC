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
        int a,b;
        cin>>a>>b;
        if(a==b && a%2==1) {
            vector<int> div;
            for(int i=2;i<=sqrt(a);i++) {
                if(a%i==0) {
                    div.push_back(i);
                    if(a/i!=i) div.push_back(a/i);
                }
            }
            bool flag = false;
            for(int i:div) {
                int x=i,y=a-x;
                if(gcd(x,y)!=1) {
                    flag = true;
                    cout<<x<<" "<<y<<endl;
                    break;
                }
            }
            if(!flag) {
                cout<<-1<<endl;
            }
        }
        else {
            if (b%2==0 && b!=2) cout<< b/2<<" "<<b/2<<endl;
            else if((b-1)%2==0 && (b-1)!=2) cout<<(b-1)/2<<" "<<(b-1)/2<<endl;
            else cout<<-1<<endl;
        }
    }
    return 0;
}
