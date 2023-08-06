class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        
        long long product1 = 1, product2 = 1;

        product1 = nums[0]*nums[1]*nums[n-1];
        product2 = nums[n-1]*nums[n-2]*nums[n-3];
        return max(product1, product2);
        
        
    }
};
