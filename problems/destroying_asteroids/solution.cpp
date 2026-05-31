class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        vector<long long> count(100001, 0);
        for(long long a : asteroids) count[a]++;
        long long totalMass = mass;
        for(long long i = 1; i <= 100000; i++){
            if(count[i] > 0){
                if(totalMass < i) return false;
                totalMass += (long long) count[i] * i;
            }
        }
        return true;
    }
};