class Solution {
public:
    vector<int> countBits(int n) {
        signed int coun=0;
        vector<int>v;
        v.push_back(0);
        if(n>0){
            for(int i=1;i<=n;i++){
                signed int num=i;
                coun=0;
                while(num>0){
                        if(num%2!=0){
                            coun+=num%2;
                        }
                    num=num/2;
                    }
                v.push_back(coun);
            }
        }
        return v;
    }
};
