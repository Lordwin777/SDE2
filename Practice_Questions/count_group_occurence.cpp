class Solution {
public:
    int getCount(string s, int k) {
        if (s.empty()) return 0;
        
        int freq[26] = {0};
        
        freq[s[0] - 'a']++;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] != s[i - 1]) {
                freq[s[i] - 'a']++;
            }
        }
        
        int totalCount = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == k) {
                totalCount++;
            }
        }
        
        return totalCount;
    }
};
