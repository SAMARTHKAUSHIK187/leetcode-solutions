class Solution {
private:
    bool isAlpha(char ch) {
        return ch >= 'a' && ch <= 'z';
    }

public:
    string reverseByType(string s) {
        int n = s.length();

        int i = 0, j = n - 1;
        while (i < j) {
            if (!isAlpha(s[i])) i++;
            else if (!isAlpha(s[j])) j--;
            else {
                swap(s[i++], s[j--]);
            }
        }

        i = 0, j = n - 1;
        while (i < j) {
            if (isAlpha(s[i])) i++;
            else if (isAlpha(s[j])) j--;
            else {
                swap(s[i++], s[j--]);
            }
        }

        return s;
    }
};