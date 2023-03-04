class Solution {
public:
    int romanToInt(string s) {
        int cou=0;
        int n=s.length();
        for(int i=0;i<n/2;i++){
            swap(s[i],s[n-i-1]);
        }
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                cou+=1;
            }
            if(s[i]=='V' && s[i+1]=='I' && i<n-1){
                cou+=4;
                i++;
            }
            else if(s[i]=='V' && s[i+1]!='I' && i<n-1){
                cou+=5;
            }
             else if(s[i]=='V' && i==n-1){
                cou+=5;
            }
            else if(s[i]=='X' &&  s[i+1]=='I'  && i<n-1){
                cou+=9;
                i++;
            }
            else if(s[i]=='X' &&  s[i+1]!='I'  && i<n-1){
                cou+=10;
            }
             else if(s[i]=='X' && i==n-1){
                cou+=10;
            }
            else if(s[i]=='L' && s[i+1]=='X'  && i<n-1){
                cou+=40;
                i++;
            }
            else if(s[i]=='L' && s[i+1]!='X'  && i<n-1){
                cou+=50;
            }
            else if(s[i]=='L' && i==n-1){
                cou+=50;
            }
            else if(s[i]=='C' && s[i+1]=='X'  && i<n-1){
                cou+=90;
                i++;
            }
             else if(s[i]=='C' && s[i+1]!='X'  && i<n-1){
                cou+=100;
            }
             else if(s[i]=='C' && i==n-1){
                cou+=100;
            }
            else if(s[i]=='D' && s[i+1]=='C'  && i<n-1){
                cou+=400;
                i++;
            }
            else if(s[i]=='D' && s[i+1]!='C'  && i<n-1){
                cou+=500;
            }
             else if(s[i]=='D' && i==n-1){
                cou+=500;
            }
            else if(s[i]=='M' && s[i+1]=='C'  && i<n-1){
                cou+=900;
                i++;
            }
            else if(s[i]=='M' && s[i+1]!='C'  && i<n-1){
                cou+=1000;
            }
             else if(s[i]=='M' && i==n-1){
                cou+=1000;
            }
        }
        return cou;
    }
};
