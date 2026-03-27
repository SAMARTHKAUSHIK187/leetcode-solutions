class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        

        int n = nums.size();
        
        unordered_map<int, int> mpp;
        for(int i = 0; i < n; i++){
            int n2 = target - nums[i];
            if(mpp.count(n2)){
                return {mpp[n2], i};
            }

            mpp[nums[i]] = i;
        }

        return {};
    }

};