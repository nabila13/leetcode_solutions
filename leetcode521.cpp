class Solution {
public:
    int findLUSlength(string a, string b) {
    int coun1=0,coun2=0;
    int j=0;
    bool flag=false;
    int maxi1=1000,maxi2=1000;
    int result;
    for(int i=0;i<a.length();i++){
        if(a[i]==b[j]){
            coun1++;
            j++;
        }
        else if(a[i]!=b[j]){
            maxi1=min(maxi1,coun1);
            coun1=0;
        }
    }
    if(coun1==a.length()|| coun1==b.length()){
        maxi1=coun1;
    }
    maxi1=max(a.length()-maxi1,b.length()-maxi1);
    j=0;
    for(int i=0;i<b.length();i++){
        if(a[j]!=b[i]){
            maxi2=min(maxi2,coun2);
            coun2=0;
        }
        else if(a[j]==b[i]){
            coun2++;
            j++;
        }
    }
     if(coun2==a.length()|| coun2==b.length()){
        maxi2=coun2;
    }
    maxi2=max(a.length()-maxi2,b.length()-maxi2);
    result=max(maxi1,maxi2);
    if(result==0){
        return -1;
    }
    else{
    return result;
    }
    }
};
