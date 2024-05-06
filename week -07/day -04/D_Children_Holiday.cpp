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

class fun {
    public:
    int a,b,c;
};

int32_t main () 
{
    int m,n;
    cin>>m>>n;
    vector<fun> v(n);
    for(int i=0;i<n;i++) {
        int a,b,c;
        cin>>a>>b>>c;
        v[i].a=a;
        v[i].b=b;
        v[i].c=c;
    }
    vector<int> sss(n);
    auto ok = [&](int md) {
        vector<int> may(n);
        int cnt = m;
        for (int i=0;i<n;i++) {
            int total,can,remaining,curr;
            int a=v[i].a,b=v[i].b,c=v[i].c;
            total=((a*b) + c);
            can=(md/ total);
            remaining=md%total;
            curr=((can*b) + min(b, (remaining / a)));
            curr=min(cnt, curr);
            cnt -= curr;
            may[i] = curr;
        }

        if (cnt==0) {
            for (int i = 0;i < n;i++) {
                sss[i] = may[i];
            }
            return true;
        }
        return false;
    };
    int l=0,r=1e8,mid,ans=0;
    while(l<=r) {
        mid = (l+r)/2;
        if(ok(mid)) {
            ans = mid;
            r = mid-1;
        }
        else l = mid +1;
    }
    cout<<ans<<endl;
    for(int i:sss) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
