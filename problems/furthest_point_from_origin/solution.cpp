class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.size();

        int l = 0, r = 0, null = 0;
        for(int i = 0; i < n; i++){
            if(moves[i] == 'R'){
                r++;
            }

            else if(moves[i] == 'L'){
                l++;
            }

            else{
                null++;
            }
        }
        int ans = 0;
        if(l > r){
            ans = abs((l + null) - r);
        }

        else{
            ans = abs((r + null) - l);
        }

        return ans;
    }
};