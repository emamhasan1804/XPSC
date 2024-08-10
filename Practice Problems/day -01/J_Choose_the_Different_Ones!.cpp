#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
 
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> s;
        int n, m, k;
        cin >> n >> m >> k;
        while (n--)
        {
            int v;
            cin >> v;
            if (v <= k)  s.insert(v); // o(logn)
        }
        set<int> s1;
        while (m--)
        {
            int v;
            cin >> v;
            if (v <= k) s1.insert(v);
        }
        if(s.size()<k/2 || s1.size()<k/2) cout<<"NO"<<endl;
        else {
            set<int> st;
            for(int i:s) {
                st.insert(i);
            }
            for(int i:s1) {
                st.insert(i);
            }
            if(st.size()<k) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}
