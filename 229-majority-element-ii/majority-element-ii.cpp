class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> m;

        for(int i=0;i<n;i++){
            if(m.count(nums[i])){
                m[nums[i]]++;
            } else {
                m[nums[i]] = 1;
            }
        }

        for(auto p : m){
            if(p.second > n/3){
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};