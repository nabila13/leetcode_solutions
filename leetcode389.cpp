class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>mp;
             char res;
        if(s.length()==0){
            res=t[0];
        }
        map<char,int>::iterator it;
        for(int i=0;i<s.length();i++){
            it=mp.find(s[i]);
            if(mp.empty() || it==mp.end()){
                mp.insert({s[i],1});
            }
            else if(it!=mp.end()){
                it->second=it->second+1;
            }
        }
        for(int j=0;j<t.length();j++){
            it=mp.find(t[j]);
            if(it==mp.end()){
                res=t[j];
                return res;
            }
            else {
                    it->second--;
                if(it->second==0){
                    mp.erase(it);
                }
            }
        }
        if(!mp.empty()){
            it=mp.begin();
            res=it->first;
        }
        return res;
    }
};
