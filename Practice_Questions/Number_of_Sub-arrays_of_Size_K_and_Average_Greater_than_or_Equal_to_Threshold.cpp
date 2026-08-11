#include <vector>

class Solution {
public:
    int numOfSubarrays(std::vector<int>& arr, int k, int threshold) {
        int targetSum = k * threshold;
        int currentWindowSum = 0;
        int count = 0;

        for (int i = 0; i < k; i++) {
            currentWindowSum += arr[i];
        }

        if (currentWindowSum >= targetSum) {
            count++;
        }

        for (int i = k; i < arr.size(); i++) {
            currentWindowSum += arr[i] - arr[i - k];
            if (currentWindowSum >= targetSum) {
                count++;
            }
        }

        return count;
    }
};
