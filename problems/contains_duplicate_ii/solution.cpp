class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map <int, vector<int>> mpp;
        for(int i = 0; i < n; i++){
            mpp[nums[i]].push_back(i);

            int size = mpp[nums[i]].size();
            if( size > 1){
                for(int j = 0 ; j < size - 1; j++){
                    if(abs(mpp[nums[i]][j] - mpp[nums[i]][j + 1]) <= k){
                        return true;
                    }
                }
            }
        }

        return false;
        
    }
};