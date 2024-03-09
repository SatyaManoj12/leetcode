class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
     map<int,int>mpp;
     vector<int>fullvec;
     int n=nums1.size()+nums2.size();
     int i=0;
     int j=0;
     while(i<nums1.size() and j<nums2.size())
     {
         if(nums1[i]==nums2[j])
         {
             return nums1[i];
         }
        else if(nums1[i]<nums2[j])
        {
            i++;
        }
        else j++;
     }
     return -1;
     /*for(int i=0;i<nums1.size();i++)
     {
         for(int j=0;j<nums2.size();i++)
         {
             if(nums1[i]==nums2[j])
             {
                 return nums1[i];
                 break;
             }
         }
     }
     return 0;*/
    }
};