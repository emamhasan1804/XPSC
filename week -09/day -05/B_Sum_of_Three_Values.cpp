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
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i].first;
        v[i].second=i+1;
    }

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++) {

        if(v[i].first>k) break;
        int target = k-v[i].first;
        int l=0,r=n-1;

        while(l<r) {
            if(l!=i && r!=i && v[l].first+v[r].first==target) {
                cout<<v[i].second<<" "<<v[l].second<<" "<<v[r].second<<endl;
                return 0;
            }
            else if(l==i && v[l].first+v[r].first==target) l++;
            else if(r==i && v[l].first+v[r].first==target) r--;
            else if(v[l].first+v[r].first>target) r--;
            else if(v[l].first+v[r].first<target) l++;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
