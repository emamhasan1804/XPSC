#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
/*
When I wrote this code ,
only God and I knew what I did.
 
Now... only God knows
*/
 
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s)
        {
            if(c==')') {
                if(st.empty()) {
                    st.push(c);
                }
                else {
                    if(st.top()=='(') {
                        st.pop();
                    }
                    else st.push(c);
                }
            }
            else st.push(c);
        }
        cout<<st.size()/2<<endl;
    }
    return 0;
}