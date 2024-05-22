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
    int n,k;
    cin>>n>>k;
    multiset<int> s;
    for(int i=0;i<n;i++) {
        int vl;cin>>vl;
        s.insert(vl);
    }
    for(int i=0;i<k;i++) {
        int vl;cin>>vl;
        if(s.size()==0) {
            cout<<-1<<endl;
            continue;
        }
        auto it = s.lower_bound(vl);
        if(it==s.end()) {
            it--;
            cout<<*it<<endl;
            s.erase(it);
        }
        else if(*it<=vl) {
            cout<<*it<<endl;
            s.erase(it);
        }
        else if(it==s.begin()) {
            cout<<-1<<endl;
        }
        else {
            it--;
            cout<<*it<<endl;
            s.erase(it);
        }
    }
    return 0;
}
