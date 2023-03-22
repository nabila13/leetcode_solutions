class Solution {
public:
    int strStr(string haystack, string needle) {
        int ind;
        int j=0;
        int cou=0;
        for(int i=0;i<haystack.size();i++){
            if(needle[j]==haystack[i]){
                ind=i;
                cou=1;
                int k=1,l=i+1;
                while(k<=needle.length()-1){
                    if(needle[k]==haystack[l]){
                        cou++;
                        k++;
                        l++;
                    }
                    else if(needle[k]!=haystack[l]){
                        break;
                    }
                }
                if(cou==needle.length()){
                    break;
                }
            }
        }
        if(cou==needle.length()){
            return ind;
        }
        else return -1;
    }
};
