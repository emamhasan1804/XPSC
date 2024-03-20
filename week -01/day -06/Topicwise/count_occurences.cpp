class Solution{
public:
	int search(string pat, string txt) {
	    int k = pat.size();
        int n = txt.size();
        int l=0,r=0,cnt=0;
        map<char,int> mp;
        for(char c:pat) {
            mp[c]++;
        }
        map<char,int> m;
        while(r<n) {
            if(r-l+1==k) {
                if(r==k-1) m[txt[r]]++;
                bool flag = true;
                for(auto it:mp) {
                    if(m[it.first]<it.second) {
                        flag = false;
                        break;
                    }
                }
                if(flag) cnt++;
                r++;
                m[txt[r]]++;
                if(m[txt[l]]>0)m[txt[l]]--;
                l++;
            }
            else { 
                char c = txt[r];
                m[c]++;
                r++;
            }
        }
        return cnt;
	    
	}

};