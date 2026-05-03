class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
      int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = i + 1; j < n; j++){
                if(nums[i] & 1){
                    if(!(nums[j] & 1))cnt++;
                }

                else{
                    if(nums[j] & 1) cnt++;
                }
            }
            ans.push_back(cnt);
        }

        return ans;
    }
};