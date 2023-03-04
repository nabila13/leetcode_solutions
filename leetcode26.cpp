

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int i=0;
      int len=nums.size();
      while(i<(nums.size()-1)){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                nums.erase(nums.begin()+j);
                j--;
            }
        }
        i++;
      }
      int s=nums.size();
      return s;
    }
};
