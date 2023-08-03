class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        bool arr[nums.size()+1];
        memset(arr, false, nums.size()+1);
        int x;
        // for(int i=0; i<nums.size(); i++){
        //     x = nums[i];
        //     arr[x]=false;
        // }
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            x = nums[i];
            if(arr[x]==true)
                v.push_back(nums[i]);
            if(arr[x]==false)
                arr[x]=true;
            
         }
            
        return v;
    }
};
