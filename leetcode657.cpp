class Solution {
public:
    bool judgeCircle(string moves) {
     int x=0,y=0;
     for(int i=0;i<moves.length();i++){
        if(moves[i]=='U'){
            y++;
        }
        else if(moves[i]=='D'){
            y--;
        }
        else if(moves[i]=='L'){
            x--;
        }
        else if(moves[i]=='R'){
            x++;
        }
    }
    bool flag;
    if(x==0 && y==0){
        flag= true;
    }
    else {
        flag=false;
    }
    return flag;
    }
};
