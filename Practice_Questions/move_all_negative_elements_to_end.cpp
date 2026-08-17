class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int> result;
        result.reserve(arr.size());

        for (int num : arr) {
            if (num >= 0) {
                result.push_back(num);
            }
        }

        for (int num : arr) {
            if (num < 0) {
                result.push_back(num);
            }
        }

        arr = move(result);
    }
};
