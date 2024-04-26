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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int q;
    cin>>q;
    while(q--) {
        int k;
        cin>>k;
        auto l = lower_bound(v.begin(),v.end(),k);
        auto r = upper_bound(v.begin(),v.end(),k);
        if(l==v.end()) {
            if(v[n-1]<k) cout<<v[n-1]<<" ";
            else cout<<"X"<<" ";
        }
        else {
            int j = l-v.begin();
            j--;
            if(j>=0 && v[j]<k) cout<<v[j]<<" ";
            else cout<<"X"<<" ";
        }
        if(r==v.end()) cout<<"X"<<endl;
        else cout<<*r<<endl;
    }
    return 0;
}
