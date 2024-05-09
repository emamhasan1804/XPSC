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
        int n,m,x;
        cin>>n>>m>>x;
        set<int> s;
        s.insert(x);
        while(m--) {
            int a;
            char b;
            cin>>a>>b;
            set<int> temp;
            if(b=='0') {
                for(int i:s) {
                    i+=a;
                    if(i>n) i-=n;
                    temp.insert(i);
                }
            }
            else if(b=='1') {
                for(int i:s) {
                    i-=a;
                    if(i<1) i+=n;
                    temp.insert(i);
                }
            }
            else {
                for(int i:s) {
                    int aa,bb;
                    aa = i+a;
                    if(aa>n) aa-=n;
                    bb = i-a;
                    if(bb<1) bb+=n;
                    temp.insert(aa);
                    temp.insert(bb);
                }
            }
            s=temp;
        }
        cout<<s.size()<<endl;
        for(int i:s) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
