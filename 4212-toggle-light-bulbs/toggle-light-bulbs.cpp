class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int freq[100] = {false};
        int n = bulbs.size();
        vector<int> ans;

        for(int i=0;i<n;i++){
            freq[bulbs[i]-1] = !freq[bulbs[i]-1];
        }

        for(int i=0;i<100;i++){
            if(freq[i]){
                ans.push_back(i+1);
            }
        }

        // sort(ans.begin(),ans.end());

        return ans;

        
    }
};