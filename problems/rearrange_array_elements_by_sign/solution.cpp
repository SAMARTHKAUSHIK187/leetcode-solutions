class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                pos.push_back(nums[i]);
            }
            else {
                neg.push_back(nums[i]);
            }
        }

        
        int poscnt = 0;
        int negcnt = 0;
        for(int i = 0; i < n; i++){
            if(i & 1){
                ans[i] = neg[negcnt];
                negcnt++;
            }


            else {
                ans[i] = pos[poscnt];
                poscnt++;
            }
        }

        return ans;
    }
};