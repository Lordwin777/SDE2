class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        vector<int> freq(26, 0);

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        int maxCount = 0;
        char result = 'a';

        for (int i = 0; i < 26; i++) {
            if (freq[i] > maxCount) {
                maxCount = freq[i];
                result = 'a' + i;
            }
        }

        return result;
    }
};
