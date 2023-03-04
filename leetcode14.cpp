class Solution {
public:
    string ret(string a,string b){
        int j=0;
        string result="";
        for(int k=0;k<b.length();k++){
            if(a[j]==b[k]){
                result.push_back(a[j]);
                j++;
            }
            else if(a[j]!=b[k]){
                break;
            }
            else if(j==a.length()-1)
                break;
        }
        return result;
    }

    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        if(strs.size()<1)
        return res;
        else if(strs.size()==1){
            return strs[0];
        }
        else {
         string s2=strs[0];
         string s3=strs[1];
         strs.erase(strs.begin(),strs.begin()+2);
         res=ret(s2,s3);
         if(strs.size()>0){
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
        res=ret(res,s);
        }
         }
        return res;
       }
    }
};
