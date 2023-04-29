class Solution {
public:
    string removeStars(string s) {
        stack<char>stc;
        for(int i=0;i<s.length();i++){
            if(s[i]!='*'){
                stc.push(s[i]);
            }
            else if(s[i]=='*' && !stc.empty()){
                stc.pop();
            }
        }
        string str,res;
        if(stc.empty()){
            res="";
        }
        else {
            while(!stc.empty()){
            char p=stc.top();
            str.push_back(p);
            stc.pop();
            }
            int len=str.length();
            for(int i=len-1;i>=0;i--){
                res.push_back(str[i]);
            }
        }
        return res;
    }
};
