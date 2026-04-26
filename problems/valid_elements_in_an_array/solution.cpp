class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        int max = nums[0];
        
        
        vector<int> ans;
        ans.push_back(max);
        if( n == 1){
            return ans;
        }

        int i = 0;
        for(; i < n; i++){
            int temp = nums[i];
            if(temp > max && i != n - 1 && i != 0){
                ans.push_back(temp);
                max = temp;
            }

            else{
                int max2 = INT_MIN;
                for(int j = i + 1; j < n; j++){
                    int temp2 = nums[j];
                    if(temp2 > max2){
                        max2 = temp2;
                    }
                }
                if(temp > max2){
                    if(i != 0 && i != n - 1 ){
                        ans.push_back(temp);
                    }
                }
            }
        }

        ans.push_back(nums[n - 1]);
        return ans;
    }
};