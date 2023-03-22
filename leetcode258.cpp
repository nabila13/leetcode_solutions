class Solution {
public:
    int addDigits(int num) {
        int coun=0,coun2;
        if(num<9){
            coun2=num;
            return coun2;
        }
        while(num>9){
            coun=coun+(num%10);
            num=num/10;
            if(num<10){
                coun+=(num%10);
                num=coun;
                if(coun<10){
                coun2=coun;
                break;
                }
                coun=0;
            }
        }
        return coun2;
    }
};
