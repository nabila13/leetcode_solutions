class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int result=original;
        while(original){
            if(find(nums.begin(),nums.end(),original)!= nums.end()){
                original*=2;
                result=original;
                continue;
            }
            else if(find(nums.begin(),nums.end(),original)==nums.end()){
                break;
            }
        }
        return result;
    }
};
