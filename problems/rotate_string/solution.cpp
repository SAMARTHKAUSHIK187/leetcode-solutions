class Solution {
public:
    bool rotateString(string s, string goal) {
        int m = s.size();
        int n = goal.size();
        if(n != m) return false;
        
        string doubled = s + s;

        return doubled.find(goal) != string :: npos
        ;
    }
};