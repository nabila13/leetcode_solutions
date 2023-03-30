class Solution {
public:
    int countSegments(string s) {
        if(s.length()==0)
        return 0;
        bool flag=false,flag2=false;
        int coun=0,res=0,coun2=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' && flag==false){
                continue;
            }
            else if(s[i]!=' '){
                flag=true;
                coun=i;
                break;
            }
        }
         for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' ' && flag2==false){
                continue;
            }
            else if(s[i]!=' '){
                flag2=true;
                coun2=i;
                break;
            }
        }
        bool flag3=false;
        if(flag!=false || flag2!=false){
        for(int i=coun;i<=coun2;i++){
            if(s[i]==' ' && flag3==false){
                continue;
            }
            else if(s[i]!=' '){
                flag3=true;
            }
            else if(s[i]==' ' && flag3==true){
                res++;
                flag3=false;
            }

        }
        res++;
        }
        else res=0;
        return res;
    }
};
