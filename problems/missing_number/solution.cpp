class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int n = nums.size();
        for(int num : nums){
            mpp[num]++;
        }
        for(int i = 0; i <= n; i++){
            if(mpp[i] == 0){
                return i;
            }
        }

        return {};
    }
};