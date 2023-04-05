class Solution {
public:
    bool checkRecord(string s) {
        bool flag=false;
        bool temp;
        int couna=0,counl=0,maxi=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!='L' && flag==true){
                maxi=max(maxi,counl);
                counl=0;
                flag=false;
                if(s[i]=='A'){
                    couna++;
                }
                else if(s[i]=='P'){
                    continue;
                }
            }
            else if(s[i]!='L' && flag==false){
                if(s[i]=='A'){
                    couna++;
                }
                else if(s[i]=='P'){
                    continue;
                }
            }
            else if(s[i]=='L' && flag==false){
                counl++;
                flag=true;
            }
            else if(s[i]=='L' && flag==true){
                counl++;
            }
        }
        maxi=max(maxi,counl);
        if(maxi>=3 || couna>=2){
            temp=false;
        }
        else if(maxi<3 && couna<2){
            temp=true;
        }
        return temp;
    }
};
