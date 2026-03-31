class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;

        if( n < 2){
            return 0;
        }

        else{
            sort(nums.begin(), nums.end());
            
            for(int i = 0; i < n; i++){
                if(i < n - 1){
                    int diff = abs(nums[i] - nums[i + 1]);
                    if(diff > ans){
                        ans = diff;
                    }
                }
            }
        }

        return ans;
    }
};