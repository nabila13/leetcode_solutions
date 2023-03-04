class Solution {
public:
    bool isAnagram(string s, string t) {
         sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        bool flag=true;
        bool temp=false;
        int coun=0;
map<char, int>mp;
map<char, int>mp2;
map<char,int>::iterator in;
map<char,int>::iterator in2;
for(int i=0;i<s.size();i++){
 in=mp.find(s[i]);
if(in==mp.end()){
mp.insert({s[i],1});
}
else{
    in->second=in->second+1;
}
}
for(int i=0;i<t.size();i++){
 in2=mp2.find(t[i]);
if(in2==mp2.end()){
mp2.insert({t[i],1});
}
else{
    in2->second=in2->second+1;
    }
}
if(mp.size()!=mp2.size()){
    flag=false;
}
else{
in=mp.begin();
in2=mp2.begin();
for(in2=mp2.begin();in2!=mp2.end();++in2){
    if(in->first==in2->first){
        temp=true;
    if(in->second==in2->second){
        in++;
    }
    else if(in->second!=in2->second){
        flag=false;
        break;
      }
    }
    else if(in->first !=in2->first){
        flag=false;
    }
    // else if(in->first!=in2->first && in2==mp2.end()){
    //   flag=false;
    // }
}
// if(in2==mp2.end() && in->first !=in2->first){
//     flag=false;
// }
// else if(in2==mp2.end() && in->first==in2->first && in->second!=in2->second){
//     flag=false;
// }
if(temp==false){
    flag=false;
  }
}
return flag;
    }
};
