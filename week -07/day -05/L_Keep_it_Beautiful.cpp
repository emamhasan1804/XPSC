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
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        stack<int> st;
        st.push(v.front());
        cout<<1;
        int cnt = 0;
        for(int i=1;i<n;i++) {
            if(v[i]>=st.top()) {
                if(cnt==1) {
                    if(v[i]<=v.front()) {
                        st.push(v[i]);
                        cout<<1;
                    }
                    else cout<<0;
                }
                else {
                    st.push(v[i]);
                    cout<<1;
                }
            }
            else {
                if(cnt==0 && v[i]<=v.front()) {
                    cnt++;
                    st.push(v[i]);
                    cout<<1;
                }
                else cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}
