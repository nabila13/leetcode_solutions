class Solution {
public:
    bool isValid(string s) {
        stack<char>stc;
        char p;
        bool flag=true;
        if(s[0]==')' || s[0]=='}' || s[0]==']'){
            flag= false;
        }
        else if(s.size()==1){
            flag=false;
        }
        else {
for(int i=0;i<s.length();i++){
    if(s[i]=='(' || s[i]=='{' || s[i]=='['){
        stc.push(s[i]);
    }
    if(s[i]==')' && stc.size()!=0){
        p=stc.top();
        if(p=='('){
            stc.pop();
        }
        else flag=false;
    }
    else if(s[i]=='}' && stc.size()!=0){
        p=stc.top();
        if(p=='{'){
            stc.pop();
        }
         else flag=false;
    }
    else if(s[i]==']' && stc.size()!=0){
        p=stc.top();
        if(p=='['){
            stc.pop();
        }
         else flag=false;
    }
    else if((s[i]=='}' || s[i]==')' || s[i]==']')&& stc.size()==0){
        flag= false;
    }
}
if(stc.size()!=0){
    flag=false;
}
        }
      return flag;
    }
};
