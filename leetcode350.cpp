
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int j=0;
        int flag,mini,n1,n2;
        sort(nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        for(int i=0;i<nums1.size();i++){
       if(nums1[i]==nums2[j]){
           v.push_back(nums2[j]);
           nums1.erase(nums1.begin()+i);
           j++;
           i--;
           if(j==nums2.size()){
               break;
           }
       }
       if(i==nums1.size()-1 && nums1.size()>0){
           i=-1;
           j++;
           if(j==nums2.size()){
            break;
           }
       }
}
        return v;
    }
};
