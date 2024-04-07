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

bool cmp(const pair<int,int> a , const pair<int,int> b) {
    return a.second-a.first<b.second-b.first;
}

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n;cin>>n;
        int bin=0;
        stack<int> st;
        int k=n;
        while(k>0) {
            st.push(k%2);
            k/=2;
        }
        int b = pow(2,(st.size()-1));
        cout<<n-b<<" "<<b<<endl;
    }
    return 0;
}