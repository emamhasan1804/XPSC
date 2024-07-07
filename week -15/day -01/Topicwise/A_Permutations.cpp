class Solution {
public:

    void fun(vector<vector<int>> &ans,vector<int> &v,vector<int> nums,vector<int> &freq) {
        if(nums.size()==v.size()) {
            ans.push_back(v);
            return;
        }
        for(int i=0;i<nums.size();i++) {
            if(freq[i]==0) {
                freq[i]=1;
                v.push_back(nums[i]);
                fun(ans,v,nums,freq);
                freq[i]=0;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        vector<int> freq(nums.size());
        fun(ans,v,nums,freq);
        return ans;
    }
};
