class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=*max_element(candies.begin(),candies.end());
        vector<bool>vb;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxi){
                vb.push_back(true);
            }
            else {
                vb.push_back(false);
            }
        }
        return vb;
    }
};
