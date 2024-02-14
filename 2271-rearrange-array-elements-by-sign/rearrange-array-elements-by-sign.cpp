class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                p.push_back(nums[i]);
            } else {

                n.push_back(nums[i]);
            }
        }
        int pi = 0;
        int ni = 0;
        vector<int>res;
        while (ni<nums.size()/2) {
            res.push_back(p[pi]);
            pi++;
             res.push_back(n[ni]);
             ni++;
        }

        return res;
    }

};