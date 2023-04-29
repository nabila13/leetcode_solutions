#include<bits/stdc++.h>
using namespace std;
int main(){
int test;
cin>>test;
for(int q=1;q<=test;q++){
    int n;string str;
    vector<char>s;
    bool flag=true;
    cin>>n;
    cin>>str;
    for(int i=0;i<n-1;i++){
    if(i<n-2){
        if(str[i]!=str[i+1]){
            if(s.empty() || find(s.begin(),s.end(),str[i])==s.end()){
            s.push_back(str[i]);
            }
            else if(find(s.begin(),s.end(),str[i])!=s.end()){
                flag=false;
                break;
            }
        }
        else if(str[i]==str[i+1]){
            continue;
        }
    }
       else if(i==n-2){
         if(str[i]!=str[i+1]){
            if(find(s.begin(),s.end(),str[i])==s.end()){
            s.push_back(str[i]);
            }
            else if(find(s.begin(),s.end(),str[i])!=s.end()){
                flag=false;
                break;
            }
            if(find(s.begin(),s.end(),str[i+1])==s.end()){
            s.push_back(str[i+1]);
            }
            else if(find(s.begin(),s.end(),str[i+1])!=s.end()){
                flag=false;
                break;
            }
        }
    }
}
if(flag==false){
    cout<<"NO"<<endl;
}
else {
    cout<<"YES"<<endl;
}
}
return 0;
}
