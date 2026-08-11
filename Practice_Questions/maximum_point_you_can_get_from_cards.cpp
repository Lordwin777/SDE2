#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
public:
    int maxScore(std::vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int windowSize = n - k;
        
        int totalSum = std::accumulate(cardPoints.begin(), cardPoints.end(), 0);
        
        if (k == n) return totalSum;
        
        int currentWindowSum = 0;
        for (int i = 0; i < windowSize; i++) {
            currentWindowSum += cardPoints[i];
        }
        
        int minWindowSum = currentWindowSum;
        
        for (int i = windowSize; i < n; i++) {
            currentWindowSum += cardPoints[i] - cardPoints[i - windowSize];
            minWindowSum = std::min(minWindowSum, currentWindowSum);
        }
        
        return totalSum - minWindowSum;
    }
};
