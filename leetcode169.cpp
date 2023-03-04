
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int quan=1,result=0,output;
        if(nums.size()==1){
            output=nums[0];
        }
        else{
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
            quan++;
        }
        else if(nums[i]!=nums[i+1]){
            if(quan>result){
                result=quan;
                output=nums[i];
                quan=1;
            }
        }
        if(i==nums.size()-2){
            if(quan>result){
                output=nums[i];
            }
        }
    }
        }
        return output;
    }
};
