class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum = 0, cnt = 0;
        map<int, int> mpp;
        mpp[0]=1;
        for (int i = 0; i < nums.size(); i++) {
            // if(nums[i]==goal) cnt++;
            sum+=nums[i];
            if (mpp.find(sum-goal) != mpp.end()) {
                cnt += mpp[sum-goal];
            }
            mpp[sum]++;
        }
        return cnt;
    }
};
