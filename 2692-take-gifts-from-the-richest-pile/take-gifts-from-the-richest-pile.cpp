class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> p;
        int n = gifts.size();

        for(int i=0;i<n;i++){
            p.push(gifts[i]);
        }

        while(k>0){
            int top = p.top();
            p.pop();
            int pile=floor(sqrt(top));
            p.push(pile);
            k--;
        }
        long long sum=0;
        while(!p.empty()){
            sum+=p.top();
            p.pop();
        }
        return sum;
    }
};