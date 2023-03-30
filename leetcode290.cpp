class Solution {
public:

    bool wordPattern(string pattern, string s) {
        bool flag;
        // if(pattern.length()!=s.length()){
        // flag=false;
        // return flag;
        // }
        map<char,string>mp;
        vector<string>str;
        string itr;

        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                itr.push_back(s[i]);
            }
            else if(s[i]==' ') {
                str.push_back(itr);
                itr.clear();
            }
            if(i==s.length()-1){
                str.push_back(itr);
            }
        }
        if(pattern.length()!=str.size()){
            flag=false;
            return flag;
        }
        map<char,string>::iterator pt;
        map<char,string>::iterator pt2;
        for(int i=0;i<pattern.length();i++){
            pt=mp.find(pattern[i]);
            if(pt==mp.end() || mp.empty()){
                if(mp.empty()){
                    mp.insert({pattern[i],str[i]});
                }
                else{
            pt2=mp.begin();
            bool temp=false;
                while(pt2!=mp.end()){
                    if(pt2->second==str[i]){
                            flag=false;
                            temp=true;
                            break;
                    }
                    ++pt2;
                }
                if(temp==false){
                    mp.insert({pattern[i],str[i]});
                 }
                 else if(temp==true){
                     return flag;
                 }
               }
            }
            else if(pt!=mp.end() && mp.size()!=0) {
                if(pt->second == str[i]){
                    flag=true;
                }
                else if(pt->second !=str[i]){
                    flag=false;
                    break;
                }
            }
        }
return flag;
    }
};
