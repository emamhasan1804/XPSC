class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &ar , int n){
        long int l=0,r=0,sum=0,ans=0;
        while(r<n) {
            sum += ar[r];
            if(r-l+1==k) {
                ans = max(sum,ans);
                sum -= ar[l];
                l++;
                r++;
            }
            else r++;
            
        }
        return ans;
    }
};