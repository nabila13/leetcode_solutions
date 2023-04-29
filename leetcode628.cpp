class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int prod=1,prod2=1;
        for(int i=0;i<3;i++){
            prod*=nums[i];
        }
        for(int i=nums.size()-1;i>nums.size()-3;i--){
            prod2*=nums[i];
        }
        int maxi=*max_element(nums.begin(),nums.end());
        prod2*=maxi;
        prod=max(prod,prod2);
        return prod;
    }
};
