class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0;
        int j = 0;
        while (i < nums1.size() and j < nums2.size()) {

            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums1[i] > nums2[j]) {
                j++;
            } else {
                if (res.empty() || res.back() != nums1[i]) {
                    res.push_back(nums1[i]);
                    // res.push_back(nums2[j]);
                }
                    i++;
                                        j++;
            }
        }
        return res;
        return {};
        /*for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums[i]==nums[j])
            }
        }*/
    }
};