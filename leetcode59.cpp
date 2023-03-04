class Solution {
public:
    int lengthOfLastWord(string s) {
       int n=s.length();
        for(int i=0;i<n/2;i++){
            swap(s[i],s[n-i-1]);
        }
        bool flag=false;
        string str;
    for(int i=0;i<n;i++){
        if(s[i]==' ' && flag==false){
            continue;
        }
        else if(s[i]==' ' && flag==true){
            break;
        }
        if(s[i]!=' '){
            flag=true;
            str.push_back(s[i]);
        }
    }
    return str.length();
    }
};
