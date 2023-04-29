class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i=0,cou=0;
        bool flag=false;
        for(int j=0;j<arr.size();j++){
            if(arr[j]!=0){
                i=2*arr[j];
                if(find(arr.begin(),arr.end(),i)!=arr.end()){
                flag=true;
                break;
                }
            }
            else if(arr[j]==0){
                if(find(arr.begin(),arr.end(),2)!=arr.end()){
                    flag=true;
                    break;
                }
                else{
                cou++;
                }
            }
        }
        if(cou==arr.size()){
            flag=true;
        }
        return flag;
    }
};
