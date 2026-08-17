class Solution {
public:
    string reverseString(string& s) {
        string reversed = "";
        
        for (int i = s.length() - 1; i >= 0; i--) {
            reversed += s[i]; 
        }
        
        s = reversed; 
        return s;
    }
};
