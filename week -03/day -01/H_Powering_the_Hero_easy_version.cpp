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
        vector<int> v;
        while(n--) {
            int vl;
            cin>>vl;
            v.push_back(vl);
        }
        priority_queue<int> q;
        int sum =0;
        for(int i:v) {
            if(i==0) {
                if(!q.empty()) {
                    sum += q.top();
                    q.pop();
                }
            }
            q.push(i);
        }
        cout<<sum<<endl;
    }
    return 0;
}