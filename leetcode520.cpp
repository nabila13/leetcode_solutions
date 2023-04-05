class Solution {
public:
    bool detectCapitalUse(string word) {
        int counu=0,counl=0;
        bool firstu=false;
        bool firstl=false,flag;
        for(int i=0;i<word.length();i++){
            if(i==0 && isupper(word[i])){
                firstu=true;
                counu++;
            }
            else if(i!=0 && isupper(word[i])){
                counu++;
            }
            else if(i==0 && islower(word[i])){
                firstl=true;
                counl++;
            }
            else if(i!=0 && islower(word[i])){
                counl++;
            }
        }
        if(firstu==true && (counu==1 || counu==word.length()) && (counl==word.length()-1|| counl==0)){
            flag=true;
        }
        else if(firstu==true && (counu!=1 && counu!=word.length()) && (counl!=word.length()-1 && counl!=0)){
            flag=false;
        }
        else if(firstl==true && counl==word.length() && counu==0){
            flag=true;
        }
        else if(firstl==true && counl!=word.length() && counu!=0){
            flag=false;
        }
        else if(firstu==false && (counl==1 || counl==word.length())&& counu!=0){
            flag=false;
        }

        return flag;
    }
};
