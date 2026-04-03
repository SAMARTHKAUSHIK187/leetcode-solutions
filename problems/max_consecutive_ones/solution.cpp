class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();

        int max = 0;
        int str = 0;
        for(int num : nums){
            if(num == 1){
                max++;
                if(max >= str){
                    str = max;
                }
            }

            else{
                max = 0;
            }
        }

        return str;
    }
};