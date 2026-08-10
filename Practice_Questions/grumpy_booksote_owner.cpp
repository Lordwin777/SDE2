class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int satisfied_already = 0;
        int current_window_gain = 0;
        int max_window_gain = 0;

        for (int i = 0; i < customers.size(); ++i) {
            if (grumpy[i] == 0) {
                satisfied_already += customers[i];
            } else if (i < minutes) {
                current_window_gain += customers[i];
            }
        }
        
        max_window_gain = current_window_gain;

        for (int i = minutes; i < customers.size(); ++i) {
            if (grumpy[i] == 1) {
                current_window_gain += customers[i];
            }
            if (grumpy[i - minutes] == 1) {
                current_window_gain -= customers[i - minutes];
            }
            
            max_window_gain = max(max_window_gain, current_window_gain);
        }

        return satisfied_already + max_window_gain;
    }
};
