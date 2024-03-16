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
    int n;
    cin>>n;
    priority_queue<int> even;
    priority_queue<int,vector<int>,greater<int>> odd;
    for(int i=0;i<n;i++) {
        int vl;
        cin>>vl;
        if(vl%2==0) even.push(vl);
        else odd.push(vl);
    }
    int sum = 0;
    while(!even.empty()) {
        sum += even.top();
        even.pop();
    }
    if(odd.size()%2!=0) odd.pop();
    while(!odd.empty()) {
        sum += odd.top();
        odd.pop();
    }
    cout<<sum<<endl;
    return 0;
}