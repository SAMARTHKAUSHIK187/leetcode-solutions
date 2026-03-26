class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n - 2; i++){
            int low = i + 1;
            int high = n -1;
            if( i > 0 && nums[i] == nums[i -1]){
                
                continue;
            }

            while(low < high){

                int sum = nums[i] + nums[low] + nums[high];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[low], nums[high]});
                    int last_low = nums[low];
                    int last_high = nums[high];
    
    
                    while (low < high && nums[low] == last_low) low++;
                    while (low < high && nums[high] == last_high) high--;
                }

                else if(sum < 0){
                    int last_low = nums[low];
                    while(low < high && nums[low] == last_low) low++;

                }

                else {
                    int last_high = nums[high];
                    while(low < high && nums[high] == last_high) high--;    
                }
            }
        }
        return ans;
        }

        
    };
