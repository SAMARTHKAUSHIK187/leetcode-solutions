class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        int sum = 0;
        vector<int> ans;
        unordered_map<int, int> mpp;    
        for(int i = 0; i < n; i++){
            sum = 0;
            mpp[A[i]]++;
            mpp[B[i]]++;
            for(auto const&[val, freq] : mpp){
                if(freq == 2) sum++;
            }
            ans.push_back(sum);
            
        }
        

        return ans;
    }
};