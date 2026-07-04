class Solution {
public:
    bool checkValidString(string s) {
        int mini=0;
        int maxi=0;

        for(auto it : s)
        {
            if(it=='(')
            {
                mini++;
                maxi++;
            }
            else if(it==')')
            {
                mini--;
                maxi--;
            }
            else
            {
                mini--;
                maxi++;
            }
            mini=max(mini,0);
            if(maxi<0) return false;
        }

        return mini==0;
        
    }
};
