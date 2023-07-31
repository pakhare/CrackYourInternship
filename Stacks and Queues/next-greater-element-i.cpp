class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        while(!nums1.empty()){
           
            int index, f=nums1.front(),flag=false;
            for(int i=0; i<nums2.size(); i++)
                if(f==nums2[i]) index=i;
            for(int i=index; i<nums2.size(); i++){
                if(nums2[i]>f){
                v.push_back(nums2[i]);flag=true; break;}
                
            }
            if(!flag) v.push_back(-1);
            nums1.erase(nums1.begin());
            
        }
        return v;
    }
};
