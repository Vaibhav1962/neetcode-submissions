class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi = INT_MIN;

        int n = heights.size();

        int l = 0;
        int r = n-1;

        while(l<r)
        {
            maxi = max(maxi,(r-l)*min(heights[l],heights[r]));

            if(heights[l]<heights[r])
            {
                l++;
            }
            else if(heights[l]>heights[r])
            {
                r--;
            }
            else
            {
                l++;
                r--;
            }
        }

        return maxi;
        
    }
};
