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
    string s;
    cin>>s;
    string temp = s;
    reverse(temp.begin(),temp.end());
    if(temp==s) cout<<0<<endl;
    else {
        cout<<3<<endl;
        cout<<"L "<<2<<endl;
        int n = s.size()+1;
        cout<<"R "<<2<<endl;
        n = n+n-3;
        cout<<"R "<<n<<endl;
    }
    return 0;
}

/*
    1 2 3 4
    2 1 2 3 4
    2 1 2 3 4 3 2 1
    2 1 2 3 4 3 2 1 2
*/
