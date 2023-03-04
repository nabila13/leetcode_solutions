
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int len=mat.size();
        int len2=mat[0].size();
          vector<vector<int>>v;
            vector<int>init;
          int i,j,k=0,l=0;
        if(r*c!=len*len2 || mat.size()==0)
        return mat;
        else if(r==1 && c==1){
            for(i=0;i<mat.size();i++){
                for(j=0;j<mat[i].size();j++){
                    init.push_back(mat[i][j]);
                }
            }
            v.push_back(init);
        }
        else{
            for(i=0;i<mat.size();i++){
                for(j=0;j<mat[0].size();j++){
                    init.push_back(mat[i][j]);
                    l++;
                    if(l==c){
                        k++;
                        l=0;
                        v.push_back(init);
                        init.clear();
                    }
                }
            }
        }
return v;
    }
};
