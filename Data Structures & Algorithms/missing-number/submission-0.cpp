class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = (n*n+n)/2;

        int totalSum=0;
        for(auto it : nums)
        {
            totalSum+=it;
        }

        return expectedSum-totalSum;
        
    }
};
