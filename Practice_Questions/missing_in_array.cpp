class Solution {
public:
    int missingNum(vector<int>& arr) {
        long long n = arr.size();
        long long total = (n + 1) * (n + 2) / 2;
        long long sum = 0;
        
        for (int num : arr) {
            sum += num;
        }
        
        return total - sum;
    }
};
