class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=target){
                k=i;
                break;
            }
            // else if(nums[i]>target){
            //     k=i;
            //     break();
            // }
        }return k;
    }
};
