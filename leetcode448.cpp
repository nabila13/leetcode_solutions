
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    int len=nums.size(),p=0;
    sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        vector<int>v;
        int j=0,s;
        for(s=1;s<=len;s++){
            if(nums[j]==s){
            j++;
                if(j==nums.size() && s<len){
                p=nums[j-1];
                break;
            }
            }
            else{
                v.push_back(s);
            }
        }
        if(p!=0 && s<=len){
            for(int i=p+1;i<=len;i++){
                v.push_back(i);
            }
        }
        return v;
    }
};
