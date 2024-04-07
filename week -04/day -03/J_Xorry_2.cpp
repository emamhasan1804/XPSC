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
        int j=0;
        while(k>0) {
            st.push(k%2);
            k/=2;
        }
        int b = pow(2,(st.size()-1));
        k = b-n+b;
        int a =b-k;
        st.pop();
        while(!st.empty()) {
            if(st.top()==1) break;
            st.pop();
        }
        int cnt = 0;
        while(!st.empty()) {
            if(st.top()==0) cnt++;
            st.pop();
        }
        int x = pow(2,cnt);
        cout<<x<<endl;
    }
    return 0;
}

/*
64 32 16 8 4 2 1
1  1  1  0 0 1 0
*/