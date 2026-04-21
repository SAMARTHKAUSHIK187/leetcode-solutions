class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = INT_MIN;
        int n = nums.size();
        int maxEle = INT_MIN;

        for(int i = 0; i < n; i++){
            sum += nums[i];
            maxEle = max(maxEle, nums[i]);
            if(sum > 0){
                maxi = max(maxi, sum);
            }
            
            

            if(i == n - 1 && maxi == INT_MIN){
                maxi = maxEle;
            }

            else if(sum <0){
                sum = 0;
            }

            
        }

        return maxi;
    }
};