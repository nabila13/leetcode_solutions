
class Solution {
public:
    int hammingWeight(uint32_t n) {
      unsigned int output=0;
      int cou=0;
        while(n>0){
            output<<=1;
            if(n&1==1){
                cou++;
            }
            n>>=1;
        }
        return cou;
    }
};
