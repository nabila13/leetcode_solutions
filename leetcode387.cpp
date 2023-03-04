class Solution {
public:
    int firstUniqChar(string s) {
        int j=0;
        int result=-1;
        bool flag=false;
        for(int i=0;i<s.length();i++){
            if(i==j){
                continue;
            }
            if(s[j]==s[i] && j!=i){
              flag=true;
              j++;
              i=-1;
            }
            else if(s[j]!=s[i] && j!=i){
                flag=false;
            }
             if(j==s.length()){
                break;
             }
            }
            if(flag==false){
                result=j;
            }
return result;
    }
};
