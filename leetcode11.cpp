class Solution {
public:
    int maxArea(vector<int>& height) {
       int j=0;
       int amount=0;
       int maxi=0;
    int i=0;j=height.size()-1;
       while(i<j){
           if(height[i]<=height[j]){
               amount=(j-i)*height[i];
               maxi=max(maxi,amount);
               i++;
           }
           else if(height[i]>height[j]){
               amount=(j-i)*height[j];
               maxi=max(maxi,amount);
               j--;
           }
       }
       return maxi;
    }
};
