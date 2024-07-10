class Solution {
    public int[] buildArray(int[] nums) {
        int n=nums.length;
        int[] res=new int[n];
        int i=0;
        while(i<n)
        {
            res[i]=nums[nums[i]];
            i++;
        }
        return res;
    }
}