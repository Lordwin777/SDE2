class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        unordered_map<int, int> freqMap;
        int maxFreq = 0;
        int mostFreqElement = arr[0];
        
        for (int num : arr) {
            freqMap[num]++;
        }
        
        for (auto const& [element, count] : freqMap) {
            if (count > maxFreq) {
                maxFreq = count;
                mostFreqElement = element;
            } else if (count == maxFreq && element > mostFreqElement) {
                mostFreqElement = element;
            }
        }
        
        return mostFreqElement;
    }
};
