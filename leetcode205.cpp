class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mp;
        map<char,char>mp2;
        map<char,char>:: iterator it;
        bool flag=true;
        bool flag2=true;
        bool temp;
        for(int i=0;i<s.length();i++){
            it=mp.find(s[i]);
            if(it==mp.end() || mp.empty()){
                mp.insert({s[i],t[i]});
            }
            else if(it!=mp.end()){
                if(it->second==t[i]){
                    continue;
                }
                else {
                    flag=false;
                    break;
                }
            }
        }
        for(int i=0;i<t.length();i++){
            it=mp2.find(t[i]);
            if(it==mp2.end()|| mp2.empty()){
                mp2.insert({t[i],s[i]});
            }
            else if(it!=mp2.end()){
                if(it->second==s[i]){
                    continue;
                }
                else {
                    flag2=false;
                    break;
                }
            }
        }
        if(flag==true && flag2==true){
            temp= true;
        }
        else if(flag==false || flag2==false){
            temp=false;
        }
        return temp;
    }
};
