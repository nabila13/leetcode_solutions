class Solution {
public:
    string toGoatLatin(string sentence) {
        vector<char>v{'a','e','i','o','u','A','E','I','O','U'};
        int len=sentence.length();
        string str;
        string res;
        int coun=0;
        for(int i=0;i<len;i++){
            if(sentence[i]!=' '){
                str.push_back(sentence[i]);
            }
            else {
                coun++;
                if(find(v.begin(),v.end(),str[0])!=v.end()){
                    str=str+"ma";
                    for(int j=1;j<=coun;j++){
                        str.push_back('a');
                    }
                    if(res.empty()){
                        res=str;
                    }
                    else{
                    res+=" "+str;
                    }
                    str.clear();
                }
                else if(find(v.begin(),v.end(),str[0])==v.end()){
                    char s=str[0];
                    str.erase(0,1);
                    str.push_back(s);
                    str+="ma";
                    for(int j=1;j<=coun;j++){
                        str.push_back('a');
                    }
                    if(res.empty()){
                        res=str;
                    }
                    else{
                    res+=" "+str;
                    }
                    str.clear();
                }
            }
        }
        if(!str.empty()){
              coun++;
                if(find(v.begin(),v.end(),str[0])!=v.end()){
                    str=str+"ma";
                    for(int j=1;j<=coun;j++){
                        str.push_back('a');
                    }
                    if(res.empty()){
                        res=str;
                    }
                    else{
                    res+=" "+str;
                    }
                    str.clear();
                }
                else if(find(v.begin(),v.end(),str[0])==v.end()){
                    char s=str[0];
                    str.erase(0,1);
                    str.push_back(s);
                    str+="ma";
                    for(int j=1;j<=coun;j++){
                        str.push_back('a');
                    }
                      if(res.empty()){
                        res=res+str;
                    }
                    else{
                    res+=" "+str;
                    }
                    str.clear();
                }
        }
        return res;
    }
};
