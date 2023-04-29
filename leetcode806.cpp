class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int>vt;
        int coun=0;
        int width=0;
        vector<char>vc{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        vector<char>::iterator it;
        for(int i=0;i<s.length();i++){
            it=find(vc.begin(),vc.end(),s[i]);
            int ind=distance(vc.begin(),it);
            width+=widths[ind];
            if(width==100 && i<s.length()-1){
                coun++;
                width=0;
            }
            else if(width==100 && i==s.length()-1){
                coun++;
                break;
            }
            else if(width>100){
                width=0;
                i--;
                coun++;
            }
        }
        if(width!=0 && width!=100){
            coun++;
        }
        vt.push_back(coun);
        vt.push_back(width);
        return vt;
    }
};
