#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main () 
{
    int t;cin>>t;while(t--) 
    {
        string s;
        cin>>s;
        int cntcp=0;
        int cntsm=0;
        stack<char> st;
        for(int i=s.size()-1;i>=0;i--) {
            char c = s[i];
            if(c>='a' && c<='z' && c!='b') {
                if(cntsm==0) {
                    st.push(c);
                }
                else if(cntsm>0) {
                    cntsm--;
                }
            }
            else if(c>='A' && c<='Z' && c!='B') {
                if(cntcp==0) {
                    st.push(c);
                }
                else if(cntcp>0) {
                    cntcp--;
                }
            }
            else if(c=='b') {
                cntsm++;
            }
            else if(c=='B') {
                cntcp++;
            }
        }  
        while(!st.empty()) {
            cout<<st.top();
            st.pop();
        } cout<<endl;
    }
    return 0;
}
