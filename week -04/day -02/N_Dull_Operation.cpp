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
        cout<<n<<" "<<n-1<<endl;
        // for(int i=1;i<=n;i+=2) {
        //     bool flag = false;
        //     for(int j=0;j<n;j+=2) {
        //         int k = ((i | j) * ( i ^ j));
        //         if(k==n) {
        //             cout<<i<<" "<<j<<endl;
        //             flag = true;
        //             break;
        //         }
        //     }
        //     if(flag) break;
        // }
    }
    return 0;
}

/*

    a*b = odd hole a=odd;b=odd;
    odd | odd = odd;
    odd | even = odd;
    even|even = even;


    odd^odd = even;
    odd^even = odd;
    even^even = even;

    1 - 1 0
    49 -1 6,3 4,5 2,7 0 ,49 48
    21 -5 6 ,7 4, 21 20
    35 -3 6 ,7 2 ,35 34

    n = n , n-1
    bingo

*/