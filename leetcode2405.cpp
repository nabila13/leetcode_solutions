class Solution {
public:
    int partitionString(string s) {
        int coun=0;
        string v;
        vector<string>vs;
        set<int>::iterator it;
        for(int i=0;i<s.length();i++){
            size_t p=v.find(s[i]);
            if(v.empty() || p==string::npos){
                v.push_back(s[i]);
            }
            else if(p!=string::npos){
                coun++;
                v.clear();
                v.push_back(s[i]);
            }
        }
        if(v.length()!=0){
            coun++;
        }
        return coun;
    }
};
