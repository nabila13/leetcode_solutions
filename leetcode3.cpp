class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;
        if(s.length()<2){
            maxi=s.length();
        }
        else{
             set<char>str;
        int j=0;
          int cou=0;
        for(int i=0;i<s.length();i++){
            if((!binary_search(str.begin(),str.end(),s[i]))|| str.empty()){
                str.insert(s[i]);
                cou++;
            }
            else {
                i=j;
                j++;
                str.clear();
                maxi=max(maxi,cou);
                cou=0;
            }
        }
         maxi=max(cou,maxi);
        }

        return maxi;
    }
};
