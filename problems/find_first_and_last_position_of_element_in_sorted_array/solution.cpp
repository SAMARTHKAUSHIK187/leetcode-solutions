class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, vector<int>> mpp;
        bool found = false;
        for(int i = 0; i < n; i++){
            mpp[nums[i]].push_back(i);
            if(nums[i] == target) found = true;
        }

        if(!found) return {-1, -1};
        vector<int> ans;
        for(int num : nums){
            if(num == target){
                int n0 = mpp[num].size();
                ans.push_back(mpp[num][0]);
                ans.push_back(mpp[num][n0 - 1]);
                break;
            }
        }

        return ans;

    }
};