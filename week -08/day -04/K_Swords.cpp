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
    int mx = -1;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        mx = max(v[i],mx);
    }
    int sum = 0;
    vector<int> temp;
    for(int i:v) {
        if(mx>i) {
            temp.push_back(mx-i);
            sum+= mx-i;
        }
    }
    temp.push_back(sum);
    int gcd1 = temp.front();
    for(int i=1;i<temp.size();i++) {
        gcd1 = gcd(gcd1,temp[i]);
    }
    cout<<sum/gcd1<<" "<<gcd1<<endl;
    return 0;
}
