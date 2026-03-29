class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        vector<string> v(4);
        string s3 = s2;
        v.push_back(s3);
        for(int i = 0; i < 2; i++){
            swap(s2[i], s2[i + 2]);
            v.push_back(s2);
            
        }

        swap(s3[1], s3[3]);
        v.push_back(s3);

        for(int i = 0; i < v.size(); i++){
            if(s1 == v[i]){
                return true;
            }
        }

        return false;
    }


};