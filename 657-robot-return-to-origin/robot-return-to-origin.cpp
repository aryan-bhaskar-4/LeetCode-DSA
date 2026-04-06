class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        int f = 0;
        int r = 0;

        for(int i=0;i<n;i++){
            if(moves[i] == 'U'){
                f++;
            } else if(moves[i] == 'D'){
                f--;
            } else if(moves[i] == 'R'){
                r++;
            } else {
                r--;
            }
        }

        if(f == 0 && r == 0){
            return true;
        }
        return false;
    }
};