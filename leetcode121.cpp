
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int diff=0,beg=prices[0],fin=prices[0];
       int len=prices.size();
       if(len==0) return 0;
       for(int i=0;i<len;i++){
           if(prices[i]>=beg){
               fin=max(fin,prices[i]);
           }
           else if(prices[i]<beg){
               diff=max(diff,abs(beg-fin));
                  fin=prices[i];
               beg=prices[i];
           }

       }
       diff=max(diff,abs(beg-fin));
       return diff;
    }
};
