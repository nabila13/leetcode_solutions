class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int>mp1;
        map<string,int>mp2;
        map<int,string>mp3;
        map<int,string>mp4;
        map<int,string>::iterator itt;
        vector<string>v1;
        vector<string>v2;
        int coun=0;
        map<string,int>::iterator it;
        for(string a:words1){
            if(mp1.empty() || mp1.find(a)==mp1.end()){
                mp1.insert({a,1});
            }
            else if(mp1.find(a)!=mp1.end()){
                  it=mp1.find(a);
                it->second++;
            }
        }
        for(string a:words2){
            if(mp2.empty() || mp2.find(a)==mp2.end()){
                mp2.insert({a,1});
            }
            else if(mp2.find(a)!=mp2.end()){
                  it=mp2.find(a);
                it->second++;
            }
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
        for(string str:v1){
            if(find(v2.begin(),v2.end(),str)!=v2.end()){
                coun++;
            }
        }
     return coun;
    }
};
