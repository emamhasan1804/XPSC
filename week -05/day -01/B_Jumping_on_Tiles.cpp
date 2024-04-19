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
    return a.first>b.first;
}

int32_t main () 
{
    int t;cin>>t;while(t--) 
    {
        string s;
        cin>>s;
        int n=s.size();
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++) {
            v[i].first= (s[i]-'a')+1;
            v[i].second = i+1;
        }
        int sum = abs(v[n-1].first-v[0].first);
        cout<<sum<<" ";
        if(v[0].first<v[n-1].first) {
            sort(v.begin()+1,v.end()-1);
        }
        else sort(v.begin()+1,v.end()-1,cmp);
        stack<pair<int,int>> st;
        st.push({v[n-1].first,v[n-1].second});

        for(int i=n-2;i>=0;i--) {
            if(v[i].first>max(v[0].first,v[n-1].first) || v[i].first<min(v[0].first,v[n-1].first)) continue;
            int x = abs(st.top().first-v[i].first);
            if(x<=sum) {
                st.push({v[i].first,v[i].second});
                sum -= x;
            }
        }
        while(!st.empty()) {
            cout<<st.top().second<<" ";
            st.pop();
        }
        cout<<endl;
    }
    return 0;
}
