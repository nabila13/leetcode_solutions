class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int pairs=0;
        int i=0;
        for(int j=i+1;j<nums.size();j++){
            if(abs(nums[i]-nums[j])==k){
                pairs++;
            }
            if(j==nums.size()-1){
                i++;
                j=i;
                if(i==nums.size()-1){
                    break;
                }
            }
        }
        return pairs;
    }
};
