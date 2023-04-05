class Solution {
public:
    string reverseWords(string s) {
        string str;
        vector<string>v;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                str.push_back(s[i]);
            }
            else if(s[i]==' '){
                reverse(str.begin(),str.end());
                v.push_back(str);
                str.clear();
            }
        }
        if(str.length()!=0){
            reverse(str.begin(),str.end());
            v.push_back(str);
        }
        s.clear();
        for(int i=0;i<v.size();i++){
            if(i<v.size()-1){
            s=s+v[i];
            s.push_back(' ');
            }
            else {
            s=s+v[i];
            }
        }
        return s;
    }
};
