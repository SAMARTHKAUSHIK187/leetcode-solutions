class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i = 0;
        int j = colors.size() - 1;
        int n1 = 0;
        int n2 = 0;
        while(i < j){
            if(colors[i] != colors[j]){
                n1 = abs(i - j);
                break;
            }
            j--;
        }
        i = 0;
        j = colors.size() - 1;
        while(i < j){
            if(colors[i] != colors[j]){
                n2 = abs(i - j);
                break;
            }
            i++;
        }
        return max(n1, n2);
    }
};