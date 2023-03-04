class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int temp=0,result=0;
        bool flag=false;

        for(int i=0;i<timeSeries.size()-1;i++){
            if((timeSeries[i+1]-timeSeries[i])>=duration){
                result+=duration;
            }
            else {
                    result=result+(timeSeries[i+1]-timeSeries[i]);
                }
            }
            result+=duration;
        return result;
    }
};
