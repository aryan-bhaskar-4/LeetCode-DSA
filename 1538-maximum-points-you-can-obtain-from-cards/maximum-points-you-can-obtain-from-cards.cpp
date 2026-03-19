class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size(), s=0, e=0;
        for(int i=1; i<=k; i++){
            s+=cardPoints[k-i];
            e+=cardPoints[n-i];
            if(e>s) s=e;
        }
        return s;
    }
};