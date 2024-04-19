#include<bits/stdc++.h>
#define int long long
#define float double
using namespace std;
 
int32_t main () 
{
    int t;cin>>t;while(t--) {
        int a,b,c;
        cin>>a>>b>>c;
        a--;
        int y = abs(c-b)+abs(1-c);
        if(a<y) cout<<1<<endl;
        else if(a>y) cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}
