class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int len=paragraph.length();
        string str;
        map<string,int>mp;
        map<string,int>::iterator it;
        map<int,string>::iterator itr;
        for(int i=0;i<len;i++){
            paragraph[i]=tolower(paragraph[i]);
            if(paragraph[i]!=' ' && isalnum(paragraph[i])){
                str.push_back(paragraph[i]);
            }
            else if(paragraph[i]==' ' || !isalnum(paragraph[i])){
                if(!str.empty()){
                if(find(banned.begin(),banned.end(),str)==banned.end()){
                    if(mp.empty()|| mp.find(str)==mp.end()){
                        mp.insert({str,1});
                        str.clear();
                    }
                    else if(mp.find(str)!=mp.end()){
                        it=mp.find(str);
                        it->second++;
                        str.clear();
                    }
                }
                else if(find(banned.begin(),banned.end(),str)!=banned.end()){
                    str.clear();
                }
            }
        }
        }
        if(!str.empty()){
            if(find(banned.begin(),banned.end(),str)==banned.end()){
                    if(mp.empty()|| mp.find(str)==mp.end()){
                        mp.insert({str,1});
                    }
                    else if(mp.find(str)!=mp.end()){
                        it=mp.find(str);
                        it->second++;
                    }
                    str.clear();
            }
        }
        map<int,string>ms;
        for(it=mp.begin();it!=mp.end();++it){
            ms.insert({it->second,it->first});
        }

        itr=--ms.end();
        str=itr->second;
        return str;
    }
};
