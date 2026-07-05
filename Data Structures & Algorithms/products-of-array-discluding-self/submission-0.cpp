class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        vector<int>prefix;
        vector<int>suffix(nums.size(),0);
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            prod*=nums[i];
            prefix.push_back(prod);

        }
        prod=1;

        for(int i=nums.size()-1;i>=0;i--)
        {
            prod*=nums[i];
            suffix[i]=prod;
        }
        for(int i=0;i<prefix.size();i++)
        {
            if(i!=0 && i!=prefix.size()-1)
            {
                ans.push_back(prefix[i-1]*suffix[i+1]);
                continue;
            }
            else
            {
                if(i==0)
                {
                    ans.push_back(suffix[1]);
                }
                else
                {
                    ans.push_back(prefix[i-1]);
                }
            }
        }
        return ans;
    }
};
