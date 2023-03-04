class Solution {
public:
    bool isPalindrome(int x) {
        vector<int>v;
        int rem;
        bool flag=true;
        while(x>0){
            rem=x%10;
            x=x/10;
            v.push_back(rem);
        }
        if(x<0) flag=false;
        else{
    for(int i=0;i<v.size()/2;i++){
        if(v[i]!=v[v.size()-i-1]){
            flag=false;
        }
        else continue;
    }
        }
    return flag;
    }
};
