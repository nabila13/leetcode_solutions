class Solution {
public:
    string reverseVowels(string s) {
     vector<char>v;
     set<char>se={'a','e','i','o','u','A','E','I','O','U'};
     for(int i=0;i<s.length();i++){
         if(binary_search(se.begin(),se.end(),s[i])){
             v.push_back(s[i]);
            }
        }
        int k=0;
        reverse(v.begin(),v.end());
        for(int j=0;j<s.length();j++){
            if(binary_search(se.begin(),se.end(),s[j])){
                s[j]=v[k];
                k++;
            }
        }
        return s;
    }
};
