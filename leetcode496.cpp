class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     vector<int>ans;
     int j=0;
     bool flag=false;
    for(int i=0;i<nums2.size();i++){
        if(nums1[j]==nums2[i] && i<nums2.size()-1){
        for(int k=i+1;k<nums2.size();k++){
            if(nums2[k]>nums2[i]){
                flag=true;
                ans.push_back(nums2[k]);
                break;
            }
            else if(k==nums2.size()-1 && flag==false && nums2[k]<=nums2[i]){
                ans.push_back(-1);
            }
        }
        j++;
        i=-1;
        flag=false;
        if(j==nums1.size()){
            break;
        }
        }
        else if(nums1[j]==nums2[i] && i==nums2.size()-1){
            ans.push_back(-1);
            j++;
            i=-1;
             if(j==nums1.size()){
            break;
        }
        }
    }
    return ans;
}
};
