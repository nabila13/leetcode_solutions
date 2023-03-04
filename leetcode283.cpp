
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count1=count(nums.begin(),nums.end(),0);
        if(count1==nums.size()){
            nums.clear();
        }
        else{
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
            i--;
            }
          }
        }
        for(int i=1;i<=count1;i++){
            nums.push_back(0);
        }

    }
};
