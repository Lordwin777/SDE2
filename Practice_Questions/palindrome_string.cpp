class Solution {
public:
    bool isPalindrome(string& s) {
        auto left = s.begin();
        auto right = s.end() - 1;
        
        while (left < right) {
            if (*left != *right) {
                return false;
            }
            left++;
            right--;
        }
        
        return true;
    }
};
