class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<char>vc{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        map<char,int>mp;
        map<char,int>::iterator itr;
            vector<char>::iterator it;
            bool flag=true;
            for(int i=0;i<s.length();i++){
                if(mp.empty()|| mp.find(s[i])==mp.end()){
                    mp.insert({s[i],1});
                }
                else if(mp.find(s[i])!=mp.end()){
                // itr=mp.find(s[i]);
                // if(itr->second==0){
                    continue;
                //}
                }
                for(int j=0;j<26;j++){
                    if(vc[j]==s[i]){
                        int ind=distance[j]+1;
                        if(i+ind<=s.length() && s[i+ind]==s[i]){
                          itr=mp.find(s[i]);
                          itr->second=0;
                        }
                        else {
                            flag=false;
                            break;
                        }
                    }
                }
            }
        return flag;
    }
};
