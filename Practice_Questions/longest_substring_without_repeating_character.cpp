class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(128, -1);
        int maxLength = 0;
        int start = 0;

        for (int end = 0; end < s.size(); end++) {
            char current = s[end];

            if (lastIndex[current] >= start) {
                start = lastIndex[current] + 1;
            }

            lastIndex[current] = end;
            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};
