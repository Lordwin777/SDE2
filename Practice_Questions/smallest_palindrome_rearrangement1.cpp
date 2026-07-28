class Solution {
public:
    string smallestPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            if (s[left] != s[right]) {
                char smaller_char = min(s[left], s[right]);
                s[left] = smaller_char;
                s[right] = smaller_char;
            }
            left++;
            right--;
        }
        return s;
    }
};
