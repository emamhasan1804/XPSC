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
    int x = 0;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
        x = max(x,v[i]);
    }
    x= sqrt(x)+1;
    vector<bool> prime(x+1,true);
    for(int i=2;i<=sqrt(x);i++) {   
        if(prime[i]) {
            for(int j=i+i;j<=x;j+=i) {
                prime[j]=false;
            }
        }
    }
    for(int i:v) {
        int k = sqrt(i);
        if(i==1) cout<<"NO"<<endl;
        else if(k*k!=i) cout<<"NO"<<endl;
        else {
            if(prime[k]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
