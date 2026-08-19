class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minFreq(26, 100);
        
        for (const string& word : words) {
            vector<int> currentFreq(26, 0);
            for (char ch : word) {
                currentFreq[ch - 'a']++;
            }
            
            for (int i = 0; i < 26; i++) {
                minFreq[i] = min(minFreq[i], currentFreq[i]);
            }
        }
        
        vector<string> result;
        for (int i = 0; i < 26; i++) {
            while (minFreq[i] > 0) {
                result.push_back(string(1, 'a' + i));
                minFreq[i]--;
            }
        }
        
        return result;
    }
};
