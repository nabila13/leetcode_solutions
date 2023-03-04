
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c;
        bool state=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                c=i;
                state=true;
                break;
            }
            else{
                continue;
            }
        }
        if(state==false){
            c=nums.size();
        }
        return c;
    }
};
