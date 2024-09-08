#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main () 
{
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        char ch[n];
        int cnt = 0;
        int tc = 0;
        for(int i=0;i<n;i++) {
            char c;
            cin>>c;
            if(c=='*') {
                tc++;
            }
            if(c=='@' && tc<2) {
                tc=0;
                cnt++;
            }
            else if(c=='.' && tc<2) {
                tc=0;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
