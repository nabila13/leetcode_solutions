class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        bool flag=true;
        bool temp=false;
        int coun=0;
map<char, int>mp;
map<char, int>mp2;
map<char,int>::iterator in;
map<char,int>::iterator in2;
for(int i=0;i<ransomNote.size();i++){
 in=mp.find(ransomNote[i]);
if(in==mp.end()){
mp.insert({ransomNote[i],1});
}
else{
    in->second=in->second+1;
}
}
for(int i=0;i<magazine.size();i++){
 in2=mp2.find(magazine[i]);
if(in2==mp2.end()){
mp2.insert({magazine[i],1});
}
else{
    in2->second=in2->second+1;
}
}
in=mp.begin();
in2=mp2.begin();

for(in2=mp2.begin();in2!=mp2.end();in2++){
    if(in->first==in2->first){
        temp=true;
    if(in->second<=in2->second){
        in++;
    }
    else if(in->second>in2->second){
        flag=false;
        break;
      }
    }
    // else if(in->first!=in2->first && in2==mp2.end()){
    //   flag=false;
    // }
}
if(in2==mp2.end() && in->first !=in2->first && in!=mp.end()){
    flag=false;
}
if(temp==false){
    flag=false;
}
return flag;
    }
};
