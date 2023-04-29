class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>stcs;
        stack<char>stct;

        for(int i=0;i<s.length();i++){
            if(s[i]!='#'){
                stcs.push(s[i]);
            }
            else if(s[i]=='#' && !stcs.empty()){
                stcs.pop();
            }
        }
        for(int i=0;i<t.length();i++){
            if(t[i]!='#'){
                stct.push(t[i]);
            }
            else if(t[i]=='#' && !stct.empty()){
                stct.pop();
            }
        }
        bool flag=true;
        if(stcs.size()!=stct.size()){
            flag=false;
        }
        else {
            while(!stcs.empty()){
                char p=stcs.top();
                char q=stct.top();
                if(p==q){
                    stcs.pop();
                    stct.pop();
                }
                else if(p!=q){
                    flag=false;
                    break;
                }
            }
        }
return flag;
    }
};
