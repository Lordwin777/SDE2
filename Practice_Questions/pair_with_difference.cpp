class Solution {
public:
    bool findPair(vector<int> &arr, int x) {
        unordered_set<int> seen;
        for (int num : arr) {
            if (seen.count(num - x) || seen.count(num + x)) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};
