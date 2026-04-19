class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();

        int max = INT_MIN;

        for(auto &customer : accounts){
            int sum = 0;
            for(auto money : customer){
                sum += money;
            }

            if(sum > max){
                max = sum;
            }
        }

        return max;
    }
};