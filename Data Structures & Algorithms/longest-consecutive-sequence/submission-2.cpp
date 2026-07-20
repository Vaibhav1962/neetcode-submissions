class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi = 0;
        int count= 0;
        unordered_set<int>st(nums.begin(),nums.end());
        int curr;
        for(auto it : nums)
        {
            if(st.find(it - 1) == st.end())
            {
                count = 1;
                curr = it;
            }

            while(st.find(curr+1)!=st.end())
            {
                count++;
                curr = curr+1;
            }
            maxi = max(count,maxi);
        }
        return maxi;
    }
};
