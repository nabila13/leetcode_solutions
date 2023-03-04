class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size();
        int prev,adds=0;
           if(digits[len-1]==9){
               if(count(digits.begin(),digits.end(),9)==len){
                   digits.clear();
                   digits.push_back(1);
                   for(int i=1;i<=len;i++){
                        digits.push_back(0);
                   }

               }
               else{
                   while(digits[digits.size()-1]==9){
                       digits.pop_back();
                       adds++;
                   }
               digits[digits.size()-1]++;
      for(int i=1;i<=adds;i++){
                    digits.push_back(0);
      }
               }
       }
       else if(digits[len-1]<9){
           digits[len-1]++;
       }
       return digits;
    }
};
