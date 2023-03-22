class Solution {
public:
string swapStr(string s){
    int p=s.length();
    for(int v=0; v<p/2;v++){
        swap(s[v],s[p-v-1]);
    }
    return s;
}
    string addBinary(string a, string b) {
        string str;
           int c=0,i;
           int mini=min(a.length(),b.length());
           a=swapStr(a);
           b=swapStr(b);
           for(i=0;i<mini;i++){
               int sum=(a[i]-'0')+(b[i]-'0');
               if(sum>1 && c==0){
               str.push_back('0');
               c=1;
               }
               else if(sum>1 && c==1){
                   str.push_back('1');
                   c=1;
               }
               else if(sum==1 && c==1){
                   str.push_back('0');
                   c=1;
               }
               else if((sum==1 && c==0)||(sum==0 && c==1)){
                   str.push_back('1');
                   c=0;
               }
               else if(sum==0 && c==0){
                   str.push_back('0');
                   c=0;
               }
           }
           if(a.length()>mini){
               for(int j=mini;j<a.length();j++){
                   int sum=(a[j]-'0');
                   if(sum==1 && c==0){
               str.push_back('1');
               c=0;
               }
               else if(sum==1 && c==1){
                   str.push_back('0');
                   c=1;
               }
               else if(sum==0 && c==1) {
                   str.push_back('1');
                   c=0;
               }
                else if(sum==0 && c==0){
                   str.push_back('0');
                   c=0;
               }
                }
           }
                if(b.length()>mini){
               for(int j=i;j<b.length();j++){
                       int sum=(b[j]-'0');
                   if(sum==1 && c==0){
               str.push_back('1');
               c=0;
               }
               else if(sum==1 && c==1){
                   str.push_back('0');
                   c=1;
               }
               else if(sum==0 && c==1){
                   str.push_back('1');
                   c=0;
               }
                else if(sum==0 && c==0){
                   str.push_back('0');
                   c=0;
               }
                }
           }
           if(c!=0){
           str.push_back('1');
           }
           str=swapStr(str);
           return str;
    }
};
