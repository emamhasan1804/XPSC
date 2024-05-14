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
    int n;
    cin>>n;
    if(n==2) cout<<1<<endl;
    else if(n%2==0) cout<<2<<endl;
    else {
        bool flag = true;
        for(int i=2;i<=sqrt(n);i++) {
            if(n%i==0) {
                flag = false;
                break;
            }
        }
        if(flag) cout<<1<<endl;
        else {
            bool flag1 = true;
            int temp = n-2;
            for(int i=2;i<=sqrt(temp);i++) {
                if(temp%i==0) {
                    flag1 = false;
                    break;
                }
            }
            if(flag1) cout<<2<<endl;
            else cout<<3<<endl;
        }
    }
    return 0;
}
