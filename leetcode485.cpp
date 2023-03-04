
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int coun=0;
        int res=0;
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1 && flag==false){
                coun=1;
                flag=true;
            }
            else if(nums[i]==1 && flag==true){
                coun++;
            }
            else if(nums[i]==0 && flag==true){
                flag=false;
                res=max(res,coun);
                coun=0;
            }
            else continue;
        }
        res=max(res,coun);
return res;
    }
};
