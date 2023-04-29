class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>res;
            int len=matrix.size();
            int exp=matrix[0].size();
            long long int arr[len+1][exp+1];
            for(int j=0;j<matrix.size();j++){
                vector<int>v(matrix[j]);
                for(int s=0;s<v.size();s++){
                    arr[j][s]=v[s];
                }
            }
            long long arr2[exp+len+1][exp+len+1];
            for(int p=0;p<len;p++){
                for(int q=0;q<exp;q++){
                    arr2[q][p]=arr[p][q];
                }
            }
            vector<int>v;
            for(int s=0;s<exp;s++){
                for(int t=0;t<len;t++){
                    v.push_back(arr2[s][t]);
                }
                res.push_back(v);
                v.clear();
            }
        return res;
    }
};
