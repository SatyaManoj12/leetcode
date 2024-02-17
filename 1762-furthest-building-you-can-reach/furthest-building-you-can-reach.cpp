class Solution {
public:
    int furthestBuilding(vector<int>& nums, int bricks, int ladders) {
        priority_queue<int>pq;
        for(int i = 1 ; i < nums.size() ; i++)
        {
            if(nums[i] <= nums[i-1] ) continue;
            int diff = nums[i] - nums[i-1];
            bricks -= diff;
            pq.push ( diff );
            if(bricks < 0 )
            {
                bricks += pq.top();
                pq.pop() ;
                ladders-- ;
            }
            if ( ladders < 0 )
            {
                return i-1;
            }
        }
        return nums.size() - 1;
    }
};