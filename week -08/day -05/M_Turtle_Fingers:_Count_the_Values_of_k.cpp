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
        set<int> s;
        for(int i=0;pow(a,i)<=c;i++) {
            for(int j=0;pow(b,j)<=(c/(pow(a,i)));j++) {
                int x = pow(a,i)*pow(b,j);
                if(c%x==0) {
                    s.insert(c/x);
                }
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
