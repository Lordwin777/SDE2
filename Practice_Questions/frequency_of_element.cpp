class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        map<int, int> freqMap;
        for (int num : arr) {
            freqMap[num]++;
        }

        vector<vector<int>> result;
        result.reserve(freqMap.size());
        for (auto const& [element, count] : freqMap) {
            result.push_back({element, count});
        }

        return result;
    }
};
