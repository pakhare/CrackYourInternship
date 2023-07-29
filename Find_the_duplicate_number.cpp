class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> u;
        for(auto i: nums)
            u[i]++;

        for(auto i: nums)
            if(u[i]>1)
                return i;
    
        return -1;
    }
};
