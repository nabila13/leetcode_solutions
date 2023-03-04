class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        int j=0;
        for(int i=j+1;i<nums.size();i++){
            if(nums[j]+nums[i]==target){
                v.push_back(i);
                v.push_back(j);
                break;
            }
            if(j<nums.size()-1 && i==nums.size()-1){
                j++;
                i=j;
            }
        }
        return v;
    }
};
