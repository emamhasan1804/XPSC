class Solution{
  public:
    int longestKSubstr(string s, int K) {
        int n = s.size();
        int l=0,r=0,sum=0,cnt=0;
        map<char,int> mp;
        while(r<n) {
            mp[s[r]]++;
            if(mp[s[r]]==1) sum++;
            if(sum==K) {
                while(r+1<n && mp[s[r+1]]!=0) {
                    r++;
                    mp[s[r]]++;
                }
                cnt = max(cnt,r-l+1);
                while(sum!=K-1) { 
                    if(mp[s[l]]==1) {
                        sum--;
                        mp[s[l]]--;
                        l++;
                        break;
                    }
                    mp[s[l]]--;
                    l++;
                }
            }
            r++;
        }
        if(cnt==0) return -1;
        else return cnt;
        
    }
};