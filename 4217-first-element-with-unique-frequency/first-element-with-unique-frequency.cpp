class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n= nums.size();
        map<int,int> m;

        for(int i=0;i<n;i++){
            if(m.count(nums[i])){
                m[nums[i]]++;
            } else {
                m[nums[i]] = 1;
            }
        }

        unordered_map<int,int> freq;

        for(auto it : m){
            freq[it.second]++;
        }

        for(int num : nums){

            if(freq[m[num]] == 1){
                return num;
            }

        }

        
        return -1;
        
    }
};