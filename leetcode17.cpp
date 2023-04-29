class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<int, string>mp;
        string str1,str2,str3,str5;
        vector<string>vs;
 map<int,string>::iterator mt;
//        mp.insert({1,""});
        mp.insert({2,"abc"});
        mp.insert({3,"def"});
        mp.insert({4,"ghi"});
        mp.insert({5,"jkl"});
        mp.insert({6,"mno"});
        mp.insert({7,"pqrs"});
        mp.insert({8,"tuv"});
        mp.insert({9,"wxyz"});
        vector<int>vc;
        for(char c:digits){
            vc.push_back(c-'0');
        }
        if(vc.size()==0){
            vs.clear();
        }
        else if(vc.size()==1){
            mt=mp.find(vc[0]);
            str3=mt->second;
            for(char a:str3){
                string ps="";
                ps=ps+a;
                vs.push_back(ps);
            }
        }
       else if (vc.size()==2){
        for(int i=0;i<vc.size()-1;i++){
            mt=mp.find(vc[i]);
            str1=mt->second;
            for(int j=i+1;j<vc.size();j++){
                mt=mp.find(vc[j]);
                str2=mt->second;
                int k=0;
                for(int l=0;l<str2.length();l++){
                    char z=str1[k];
                    char x=str2[l];
                    string str4="";
                    str4=str4+z+x;
                    vs.push_back(str4);
                    if(l==str2.length()-1){
                        k++;
                        l=-1;
                    }
                    if(k==str1.length()){
                        break;
                    }
                }
                str2.clear();
                str1.clear();
            }
        }
       }
        else if(vc.size()==3){
           for(int i:vc){
               mt=mp.find(vc[0]);
               str1=mt->second;
               mt=mp.find(vc[1]);
               str2=mt->second;
               mt=mp.find(vc[2]);
               str3=mt->second;
           }
               for(char a:str1){
                   for(char b:str2){
                       for(char c:str3){
                           char p=a;
                           char q=b;
                           char r=c;
                           string str4="";
                           str4=str4+p+q+r;
                           vs.push_back(str4);
                       }
                   }
               }
           }
       else if(vc.size()==4){
             for(int i:vc){
               mt=mp.find(vc[0]);
               str1=mt->second;
               mt=mp.find(vc[1]);
               str2=mt->second;
               mt=mp.find(vc[2]);
               str3=mt->second;
               mt=mp.find(vc[3]);
               str5=mt->second;
           }
                for(char a:str1){
                   for(char b:str2){
                       for(char c:str3){
                           for(char d:str5){
                           char p=a;
                           char q=b;
                           char r=c;
                           char t=d;
                           string str4="";
                           str4=str4+p+q+r+t;
                           vs.push_back(str4);
                       }
                   }
               }
            }
       }
        return vs;
    }
};
