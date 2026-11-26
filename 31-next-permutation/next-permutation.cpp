class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int normal=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
               normal=i;
                break;
            }
        }
        if(normal==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>=normal;i--){
            if(nums[i]>nums[normal]){
                swap(nums[i],nums[normal]);
                break;
            }
        }
        int j=normal+1,k=n-1;
        reverse(nums.begin()+j,nums.end());        
    }
};