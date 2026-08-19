class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
        
        for (const string& word : words) {
            if (result.empty()) {
                result.push_back(word);
            } else {
                string current = word;
                string previous = result.back();
                
                sort(current.begin(), current.end());
                sort(previous.begin(), previous.end());
                
                if (current != previous) {
                    result.push_back(word);
                }
            }
        }
        
        return result;
    }
};
