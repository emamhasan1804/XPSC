#include<bits/stdc++.h>
using namespace std;
 
int main () 
{
    int t;
    cin>>t;
    while(t--) {
        string a,b;
        cin>>a>>b;
        int counta=0,countb=0;
        if(a.front()=='X') {
            if(a.back()=='L') {
                counta=2+a.size();
            }
            else if(a.back()=='S') {
                counta=-a.size();
            }
        }
        else if(a.front()=='S') counta=1;
        else if(a.front()=='M') counta=2;
        else if(a.front()=='L') counta=3;
 
        if(b.front()=='X') {
            if(b.back()=='L') {
                countb=2+b.size();
            }
            else if(b.back()=='S') {
                countb=-b.size();
            }
        }
        else if(b.front()=='S') countb=1;
        else if(b.front()=='M') countb=2;
        else if(b.front()=='L') countb=3;
        
 
        if(counta>countb) cout<<'>'<<endl;
        else if(counta<countb) cout<<'<'<<endl;
        else cout<<'='<<endl;
    }
    return 0;
}
