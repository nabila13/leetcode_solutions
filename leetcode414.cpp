class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int result;
        int coun=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
            else{
                coun++;
            }
            if(coun==3){
                result=nums[i+1];
                break;
            }
        }
        if(coun<3){
            result=nums[0];
        }
        return result;
    }
};
