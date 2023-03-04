
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        nums1.erase(nums1.begin()+m,nums1.end());
        for(int i=0;i<n;i++){
            nums1.push_back(nums2[i]);
            // if(nums1[i]>=nums2[j]){
            //     nums1.insert(nums1.begin()+i,nums2[j]);
            //     j++;
            }
            sort(nums1.begin(),nums1.end());
            // else if(nums1[i]<=nums2[j]){
            //     nums1.insert(nums1.begin()+i+1,nums2[j]);
            //     j++;
            //     i++;
            // }
        }
};
