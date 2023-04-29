class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        bool flag=true;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=maxi){
                if(nums[i]==0 || maxi/nums[i]>=2){
                    continue;
                }
                else if(maxi/nums[i]<2){
                    flag=false;
                    break;
                }
            }
        }
        int ind;
        vector<int>::iterator it;
        if(flag==true){
            it=find(nums.begin(),nums.end(),maxi);
            ind=distance(nums.begin(),it);
        }
        else{
            ind=-1;
        }
        return ind;
    }
};
