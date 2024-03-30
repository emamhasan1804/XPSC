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
        string s;
        cin>>s;
        int l=0;
        vector<int> v;
        int p=0;
        for(int i=0;i<n/2;i++) {
            if(s[i]=='L') {
                s[i]='R';
                break;
            }
            else if(s[n-1-i]=='R') {
                s[n-1-i] = 'L';
                l=i;
                break;
            }
        }
        for(int i=0;i<n;i++) {
            if(s[i]=='R') {
                p += n-i-1;
            }
            else p+= i;
        }
        v.push_back(p);
        
        for(int i=1;i<n;i++) {
            int changed = -1;
            for(int j=l;j<n/2;j++) {
                if(s[j]=='L') {
                    s[j]='R';
                    changed = j;
                    break;
                }
                else if(s[n-1-j]=='R') {
                    s[n-1-j] ='L';
                    l=j;
                    changed =n-1-j;
                    break;
                }
            }
            if(changed==-1) {
                v.push_back(v.back());
            }
            else {
                v.push_back(v.back()+(abs(changed-(n-changed-1))));
            }
        }
        for(int i:v) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}