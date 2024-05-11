#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main () 
{
    int t;cin>>t;while(t--) 
    {
        int a,b;
        cin>>a>>b;
        if(b==1) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
        }
    }
    return 0;
}
