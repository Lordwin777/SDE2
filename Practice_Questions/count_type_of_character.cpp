class Solution { 
public: 
    vector<int> count(string &s) { 
        int upper = 0, lower = 0, num = 0, special = 0;
        
        for (char c : s) {
            if (c >= 'A' && c <= 'Z') {
                upper++;
            } else if (c >= 'a' && c <= 'z') {
                lower++;
            } else if (c >= '0' && c <= '9') {
                num++;
            } else {
                special++;
            }
        }
        
        return {upper, lower, num, special};
    } 
};
