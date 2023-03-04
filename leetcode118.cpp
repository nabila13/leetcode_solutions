class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int>single;
        vector<int>bi;
        vector<vector<int>>comb;
        int p=1;
        for(int i=1;i<=numRows;i++){
            if(i==1){
                single.push_back(p);
                comb.push_back(single);
                single.clear();
            }
            else if(i==2){
                single.push_back(p);
                single.push_back(p);
                comb.push_back(single);
            }
            else{
                single.clear();
                bi.push_back(p);
                for(int j=1;j<i-1;j++){
                bi.push_back(single[j-1]+single[j]);
                    if(j==i-2){
                    bi.push_back(p);
                    single.assign(bi.begin(),bi.end());
                    comb.push_back(bi);
                    bi.clear();
                    break;
                    }
                }
            }
        }
        return comb;
    }
};
