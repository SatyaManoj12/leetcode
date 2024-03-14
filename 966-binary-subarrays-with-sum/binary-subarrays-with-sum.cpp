class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count = 0;
        int sum = 0;
        unordered_map<int, int> prefixSumFreq;

        prefixSumFreq[0] = 1; // Handle subarrays that start from index 0 and
                              // sum up to the goal

        for (int num : nums) {
            sum += num;
            if (prefixSumFreq.find(sum - goal) != prefixSumFreq.end()) {
                count += prefixSumFreq[sum - goal];
            }
            prefixSumFreq[sum]++;
        }

        return count;
    }
};