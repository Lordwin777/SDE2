class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        unordered_map<int, int> freqMap;
        for (int num : arr) {
            freqMap[num]++;
        }
        
        for (int num : arr) {
            if (freqMap[num] == 1) {
                return num;
            }
        }
        
        return 0;
    }
};
