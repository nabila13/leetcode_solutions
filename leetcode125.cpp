class Solution {
public:
    bool isPalindrome(string s) {
        bool flag=false;

        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
        auto it = std::remove_if(s.begin(), s.end(), [](char const &c) {
        return !std::isalnum(c);
        });
        s.erase(it,s.end());
        if(s.length()<2){
            flag=true;
        }
        else{
            int len=s.length();
            for(int i=0;i<len/2;i++){
                if(s[i]==s[len-i-1]){
                    flag=true;
                }
                else{
                    flag=false;
                    break;
                }
            }
        }
       return flag;
    }
};
