class Solution {
    public int[] getConcatenation(int[] nums) {
        int ns=nums.length+nums.length;
        int res[]=new int[ns];
        int i=0;
        int n=nums.length;
        while(i<nums.length)
        {
            res[i]=nums[i];
            res[i+n]=nums[i];
            i++;
        }
        return res;
    }
}