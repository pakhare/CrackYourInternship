class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>  v;
        bool flag = true;
        for(int i=0; i<nums.size() && flag==true; i++)
            for(int j=i+1; j<nums.size(); j++)
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    flag=false;
                }
        return v;
        
    }
};
