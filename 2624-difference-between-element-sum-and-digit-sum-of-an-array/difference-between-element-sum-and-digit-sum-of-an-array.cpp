class Solution {
public:
int indi(int n)
{
    int temp=n;
    int sum=0,rem;
    while(temp)
    {
        rem=temp%10;
        sum+=rem;
        temp/=10;
    }
    return sum;
}
    int differenceOfSum(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
        }
        int ems=0;
        for(int i=0;i<nums.size();i++)
        {
            ems+=indi(nums[i]);
        }
        return abs(ems-s);
    }
};