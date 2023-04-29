class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int len=score.size();
        vector<string>vs(len,"");
        set<int>s;
        vector<string>scores;
        for(int i=0;i<len;i++){
            if(i==0){
                scores.push_back("Gold Medal");
            }
            else if(i==1){
                scores.push_back("Silver Medal");
            }
            else if(i==2){
                scores.push_back("Bronze Medal");
            }
            else{
            string str=to_string(i+1);
            scores.push_back(str);
            }
        }
        for(int i=0;i<len;i++){
            s.insert(score[i]);
        }
        int coun=0;
        set<int>::iterator it=s.begin();
        vector<int>::iterator vt;
         while(coun<len){
            vt=find(score.begin(),score.end(),*it);
            int ind=distance(score.begin(),vt);
            cout<<ind<<endl;
            vs[ind]=scores[len-coun-1];
            ++it;
            coun++;
        }
        return vs;
    }
};
