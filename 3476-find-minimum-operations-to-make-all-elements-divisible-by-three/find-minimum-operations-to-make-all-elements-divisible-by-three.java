class Solution {
    public int minimumOperations(int[] nums) {
        int cnt=0;
        int i;
        for(i=0;i<nums.length;i++)
        {
            if((nums[i]+1)%3==0 ||(nums[i]-1)%3==0)
            {
                cnt++;
            }
        }
        return cnt;
    }
}