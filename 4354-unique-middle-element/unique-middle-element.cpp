class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        unordered_set<int>s;
        while(i<j){
            s.insert(nums[i]);
            s.insert(nums[j]);
            i++,j--;
        }
        if(s.find(nums[i])==s.end()) return true;
        return false;
    }
};