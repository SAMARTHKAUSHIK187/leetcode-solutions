class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int count1 = 0;
        int count2 = 0;
        int j = 0;
        int ans = n;
        bool anse = false;
        for(int k = 0; k < n; k++){
            if(nums[k] == 1){
                i = k;
                count1++;
            }

            else if(nums[k] == 2){
                j = k;
                count2++;
            }

            if((count1 > 0) && (count2 > 0) && (ans > abs(i - j))){
                ans = abs(i - j);
                anse = true;
            }

            else if(!anse && k == n -1){
                ans = -1;
            }
            
            
        }

        return ans;
    }
};