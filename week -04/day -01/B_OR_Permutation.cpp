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
        vector<int> v;
        for(int i=n;i>=1;i--) {
            v.push_back(i);
        }
        for(int i:v) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// x = 3 | 2 = 3 ; 3> 1 and 1!=3|2;
// 5|4 >3 