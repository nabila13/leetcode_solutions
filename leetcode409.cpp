class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        map<char,int>::iterator it;
        for(int i=0;i<s.length();i++){
               it=mp.find(s[i]);
            if(it==mp.end()){
                mp.insert({s[i],1});
            }
            else {
                it->second=it->second+1;
            }
        }
        int quo=0,res=0;
        bool flag=false;
        for(it=mp.begin();it!=mp.end();++it){
            quo=(it->second)/2;
            res+=(quo*2);
            if((it->second)%2==1 && flag==false){
                res++;
                flag=true;
            }
            else if((it->second)%2==1 && flag==true){
                continue;
            }
        }
        return res;
    }
};
