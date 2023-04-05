
class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1=num1.length();
        int len2=num2.length();
        int res=0;
        int rem=0;
        int addi=0,coun=0;
        if(len1>len2){
            int j=len2-1;
            for(int i=len1-1;i>=0;i--){
                if(j>=0){
                addi=(num1[i]-'0')+(num2[j]-'0');
                }
                else if(j<0){
                    addi=num1[i]-'0';
                }
                if(addi+rem>9){
                    if(addi>9){
                    coun=addi%10;
                    addi=addi/10;
                    }
                    res=(res*10)+rem+addi;
                    rem=coun;
                }
                else{
                    res=(res*10)+rem+addi;
                }
                j--;
            }
        }
        else if(len1<=len2){
            int j=num1.length()-1;
            for(int i=len2-1;i>=0;i--){
                  if(j>=0){
                addi=(num1[j]-'0')+(num2[i]-'0');
                }
                else if(j<0){
                    addi=num2[i]-'0';
                }
                addi=addi+rem;
                if(addi>9){
                    rem=addi/10;
                    addi=addi%10;
                    res=(res*10)+addi;
                    rem=coun;
                }
                else if(addi<=9){
                    res=(res*10)+addi;
                    rem=0;

                }
                j--;
            }
        }
        int rev=0;
        while(res>0){
            coun=res%10;
            res/=10;
            rev=(rev*10)+coun;

        }
        string str=to_string(rev);
        return str;
    }
};
