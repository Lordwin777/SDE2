class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        
        for (char c : s) {
            if (isalnum(c)) cleaned += tolower(c);
        }
        
        string reversed(cleaned.rbegin(), cleaned.rend());
        return cleaned == reversed;
    }
};
