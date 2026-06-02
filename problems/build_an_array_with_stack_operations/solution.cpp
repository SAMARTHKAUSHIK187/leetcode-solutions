class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int j = 0;
        int maxLimit = target.size();
        for(int i = 0; i < n; i++){
            if(j >= maxLimit) break;
            else if(j < maxLimit && target[j] == i + 1){
                ans.push_back("Push");
                j++;
            }
            else if(j < maxLimit && target[j] > i + 1){
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};