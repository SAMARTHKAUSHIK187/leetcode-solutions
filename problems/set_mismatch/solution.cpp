class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        vector<int> ans;
        
        for(int i = 0; i < n; i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] > 1){
                
                ans.push_back(nums[i]);
            }
        }

        for(int i = 0; i < n; i++){
            if(mpp[i + 1] == 0){
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
};