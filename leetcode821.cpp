class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>vc;
        int pss,fss,sss;
        bool flag=false;
        bool temp=false;
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                vc.push_back(0);
                continue;
            }
            if(i==0){
                int a=s.find(c);
                int ass=a-i;
                vc.push_back(ass);
            }
            else if(i==s.length()-1){
                for(int l=i-1;l>=0;l--){
                    if(s[l]==c){
                        sss=i-l;
                        vc.push_back(sss);
                        break;
                    }
                }
            }
            else if(i!=0 && i!=s.length()-1){
                for(int j=i-1;j>=0;j--){
                    if(s[j]==c){
                        pss=i-j;
                        temp=true;
                        break;
                    }
                    if(j==0 && temp==false){
                        pss=10000;
                    }
                }
                for(int k=i+1;k<s.length();k++){
                    if(s[k]==c){
                        fss=k-i;
                        flag=true;
                        break;

                    }
                    if(k==s.length()-1 && flag==false){
                        fss=10000;
                    }
                }
                int ss=min(pss,fss);
                pss=10000;
                fss=10000;
                vc.push_back(ss);
            }
        }
        return vc;
    }
};
