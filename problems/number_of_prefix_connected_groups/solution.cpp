#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        // Variable requested by the prompt
        vector<string> v;
        
        // 1. Filter: Only keep words with length >= k
        for (const string& s : words) {
            if (s.size() >= k) {
                v.push_back(s);
            }
        }

        // 2. Sort: Words with the same first k characters will be neighbors
        sort(v.begin(), v.end());

        int groupCount = 0;
        int n = v.size();
        int i = 0;

        
        while (i < n) {
            int j = i + 1;
            bool groupFound = false;
            while (j < n) {
                bool match = true;
                for (int l = 0; l < k; l++) {
                    if (v[i][l] != v[j][l]) {
                        match = false;
                        break;
                    }
                }

                if (match) {
                    groupFound = true;
                    j++;
                } else {
                    break; 
                }
            }
            if (groupFound) {
                groupCount++;
            }

            
            i = j;
        }

        return groupCount;
    }
};