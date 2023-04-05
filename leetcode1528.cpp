class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str,p;
        vector<char>v(s.length(),'0');
        for(int i=0;i<s.length();i++){
            // if(indices[i]>v.size()){
            //     v.resize(indices[i]);
            // }
            v[indices[i]]=s[i];
        }
        for(int i=0;i<v.size();i++){
            str.push_back(v[i]);
        }
        return str;
    }
};
