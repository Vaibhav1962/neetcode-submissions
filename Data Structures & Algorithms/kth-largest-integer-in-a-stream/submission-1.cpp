class KthLargest {
    vector<int>nums;
    int k;
public:
    KthLargest(int k1, vector<int>& arr) {
        k=k1;
        nums=arr;
    
    }
    
    int add(int val) {
        nums.push_back(val);
        priority_queue<int ,vector<int>,greater<int>>pq;
        for(auto it : nums)
        {
            pq.push(it);
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        return pq.top();
        
    }
};
