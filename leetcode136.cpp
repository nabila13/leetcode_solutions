
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      while(nums.size()>=1){
            if(count(nums.begin(),nums.end(),nums[0])==2){
                nums.erase(nums.begin());
                nums.erase(nums.begin());
            }
            else if(count(nums.begin(),nums.end(),nums[0])==1){
                break;
            }
        }
        return nums[0];
    }
};
