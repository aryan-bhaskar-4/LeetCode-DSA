class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        stack<int> s;

        for(int i=n-1;i>=0;i--){
            if(nums[i] == 0){
                count++;
            } else {
                s.push(nums[i]);
            }
            nums.pop_back();
        }

        while(!s.empty()){
            nums.push_back(s.top());
            s.pop();
        }

        while(count > 0){
            nums.push_back(0);
            count--;
        }

        return;
    }
};