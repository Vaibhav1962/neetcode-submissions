class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp;
        if(s.size()!=t.size())return false;
        for(auto it : s)
        {
            mpp[it]++;
        }

        for(auto it : t)
        {
            if(mpp.find(it)==mpp.end())
            {
                return false;
            }
            mpp[it]--;
            if(mpp[it]==0)
            {
                mpp.erase(it);
            }
        }
        if(mpp.empty())
        {
            return true;
        }
        return false;
        
    }
};
