class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned int output=0;
       for(int i = 31; i >= 0; i--){
         output |= (n & 1) <<i;
         n>>=1;
      }
        return output;
    }
};
