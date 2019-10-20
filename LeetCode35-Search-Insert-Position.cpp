class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int prev = nums[0]-1;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]>target || nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};
