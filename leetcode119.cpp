class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>single;
        vector<int>bi;
        int p=1;
        for(int i=0;i<=rowIndex;i++){
            if(i==0){
                single.push_back(p);
            }
            else if(i==1){
                single.push_back(p);
            }
            else{
                bi.push_back(p);
                for(int j=1;j<=i-1;j++){
                bi.push_back(single[j-1]+single[j]);
                    if(j==i-1){
                    bi.push_back(p);
                    single.clear();
                    single.assign(bi.begin(),bi.end());
                    bi.clear();
                    break;
                    }
                }
            }
        }
        return single;
    }
};
