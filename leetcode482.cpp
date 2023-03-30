class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
    vector<char>c;
    for(int i=0;i<s.length();i++){
        if(s[i]!='-'){
            c.push_back(s[i]);
         }
        else if(s[i]=='-'){
            continue;
        }
    }
    for(int i=0;i<c.size();i++){
        c[i]=toupper(c[i]);
    }
    int cou=0;
    int cou1=0;
     bool flag=false;
    int rem=c.size()%k;
    if(rem!=0){
        cou1=rem;
     }
     else cou1=k;
    s.clear();
    for(int i=0;i<c.size();i++){
        cou++;
        s.push_back(c[i]);
        if(flag==false){
            if(cou==cou1 && i!=c.size()-1){
                s.push_back('-');
                flag=true;
                cou=0;
            }
        }
        else if(flag==true){
            if(cou==k && i!=c.size()-1){
                s.push_back('-');
                cou=0;
            }
        }
    }
    return s;
    }
};
