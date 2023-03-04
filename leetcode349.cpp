class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        sort(nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
           for(int i=0;i<nums1.size()-1;i++){
    if(nums1[i]==nums1[i+1]){
        nums1.erase(nums1.begin()+i);
        i--;
    }
      }
           for(int i=0;i<nums2.size()-1;i++){
    if(nums2[i]==nums2[i+1]){
        nums2.erase(nums2.begin()+i);
        i--;
    }
      }
        for(int i=0;i<nums1.size();i++){
      if(binary_search(nums2.begin(),nums2.end(),nums1[i])){
           v.push_back(nums1[i]);
           }
           else continue;
      }
        return v;
    }
};
