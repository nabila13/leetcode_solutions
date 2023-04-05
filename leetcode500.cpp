class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int>v;
        vector<string>s;
        vector<char>c1={'q','w','e','r','t','y','u','i','o','p'};
        vector<char>c2={'a','s','d','f','g','h','j','k','l'};
        vector<char>c3={'z','x','c','v','b','n','m'};
        string str;
        int cou1=0,cou2=0,cou3=0,cou;
        for(int i=0;i<words.size();i++){
            str=words[i];
            cou1=cou2=cou3=0;
            cou=0;
            for(int j=0;j<str.length();j++){
                str[j]=tolower(str[j]);
            if(find(c1.begin(),c1.end(),str[j])!=c1.end()){
                cou1++;
            }
            else if(find(c2.begin(),c2.end(),str[j])!=c2.end()){
                cou2++;
            }
            else if(find(c3.begin(),c3.end(),str[j])!=c3.end()){
                cou3++;
            }
            }
            if(cou1!=0){
                cou++;
            }
            if(cou2!=0){
                cou++;
            }
            if(cou3!=0){
                cou++;
            }
            v.push_back(cou);
        }

        for(int i=0;i<v.size();i++){
            if(v[i]==1){
                s.push_back(words[i]);
            }
        }
        return s;
    }
};
