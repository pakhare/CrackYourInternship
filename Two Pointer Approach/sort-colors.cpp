class Solution {
public:
    void sortColors(vector<int>& nums) {
    //     int count[3] = {0, 0, 0};

    //     for(int i=0; i<nums.size(); i++)
    //         count[nums[i]]++;
        
    //     int cnt = 0;
    //     for(int i=0; i<nums.size(); i++){
    //         if(cnt<count[0])
    //             nums[i]=0;
    //         else if(cnt<count[0]+count[1])
    //             nums[i]=1;
    //         else
    //             nums[i]=2;
            
    //         cnt++;
    //     }
    // }
    list<int> a, b;
    for(int i=0; i<nums.size(); i++)
        nums[i]==0 ? a.push_back(nums[i]) : nums[i]==1 ? b.push_front(nums[i]) : b.push_back(nums[i]);
    nums.clear();
    merge(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(nums));
    }
};
