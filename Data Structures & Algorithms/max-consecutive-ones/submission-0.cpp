class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currCount=0;
        int maxCount=0;

        for(auto num : nums)
        {
            if(num == 1)
            {
                currCount++;
            }
            else
            {
                currCount=0;
            }

            maxCount=max(maxCount,currCount);
        }

        return maxCount;
        
    }
};