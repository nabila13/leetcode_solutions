class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int>mp1;
        map<string,int>mp2;
        map<int,string>mp3;
        map<int,string>mp4;
        map<int,string>::iterator itr;
        map<string,int>::iterator it;
        vector<string>v1;
        vector<string>v2;
        vector<string>res;
        string str,str2;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=' '){
                str.push_back(s1[i]);
            }
            else {
                it=mp1.find(str);
                if(mp1.empty() || it==mp1.end()){
                    mp1.insert({str,1});
                }
                else if(it!=mp1.end()){
                    it->second++;
                }
                str.clear();
            }
        }
        for(int i=0;i<s2.length();i++){
            if(s2[i]!=' '){
                str2.push_back(s2[i]);
            }
            else {
                it=mp2.find(str2);
                if(mp2.empty() || it==mp2.end()){
                    mp2.insert({str2,1});
                }
                else if(it!=mp2.end()){
                    it->second++;
                }
                str2.clear();
            }
        }
        if(!str.empty()){
             it=mp1.find(str);
                if(mp1.empty() || it==mp1.end()){
                    mp1.insert({str,1});
                }
                else if(it!=mp1.end()){
                    it->second++;
                }
                str.clear();
        }
        if(!str2.empty()){
            it=mp2.find(str2);
                if(mp2.empty() || it==mp2.end()){
                    mp2.insert({str2,1});
                }
                else if(it!=mp2.end()){
                    it->second++;
                }
                str2.clear();
        }
        for(it=mp1.begin();it!=mp1.end();++it){
            if(it->second==1){
                v1.push_back(it->first);
            }
        }
        for(it=mp2.begin();it!=mp2.end();++it){
            if(it->second==1){
                v2.push_back(it->first);
            }
        }
        for(string as:v1){
            if(mp2.find(as)==mp2.end()){
                res.push_back(as);
            }
        }
        for(string asa:v2){
            if(mp1.find(asa)==mp1.end()){
                res.push_back(asa);
            }
        }
        return res;
    }
};
