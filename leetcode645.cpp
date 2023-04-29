class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
          for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                v.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(!binary_search(nums.begin(),nums.end(),i+1)){
                v.push_back(i+1);
            }
        }
        return v;
    }
};
