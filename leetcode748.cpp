class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        map<char,int>mp;
        set<char>alp{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        int coun=0;
        map<int,string>mp2;
        vector<string>v;
        map<char,int>::iterator it;
        for(int i=0;i<licensePlate.length();i++){
             licensePlate[i]=tolower(licensePlate[i]);
            if(binary_search(alp.begin(),alp.end(),licensePlate[i])){
                it=mp.find(licensePlate[i]);
                if(mp.empty()|| it==mp.end()){
                    mp.insert({licensePlate[i],1});
                }
                else if(it!=mp.end()){
                    it->second=it->second+1;
                }
            }
        }
        string sst="";
        for(int j=0;j<words.size();j++){
            string str=words[j];
            int coun2=coun;
               map<char,int>mp3=mp;
            int len=str.length();
            for(int k=0;k<len;k++){
                it=mp3.find(str[k]);
               if(it!=mp3.end()){
                    it->second=it->second-1;
                    if(it->second==0){
                        mp3.erase(it);
                    }
                }
                else if(it==mp3.end()){
                    continue;
                }
            }
            if(mp3.size()==0){
            mp2.insert({len,str});
            }
        }
        map<int,string>::iterator pt=mp2.begin();
        int len=pt->first;
        for(pt=mp2.begin();pt!=mp2.end();++pt){
            if(pt->first==len){
                v.push_back(pt->second);
            }
        }
        map<int,string>mp4;
        vector<string>::iterator vs;
        for(int a=0;a<v.size();a++){
            vs=find(words.begin(),words.end(),v[a]);
            int ind=distance(words.begin(),vs);
            mp4.insert({ind,v[a]});
        }
        map<int,string>::iterator mps=mp4.begin();
        string sp=mps->second;
        return sp;
    }
};
