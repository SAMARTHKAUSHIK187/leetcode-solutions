class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int> mpp;
        for (char c : s) mpp[c]++;

  
        vector<vector<char>> buckets(n + 1);
        for (auto const& [ch, count] : mpp) {
            buckets[count].push_back(ch);
        }

        string ans = "";
  
        for (int i = n; i > 0; i--) {
            for (char ch : buckets[i]) {
                ans.append(i, ch);
            }
        }

        return ans;
    }
};