class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();

        if(n <= 1) return true;
        bool isAllEven = false;
        bool isAllOdd = false;
        int minVal = nums1[0];

        for(int i=0;i<n;i++){
            if(nums1[i] < minVal){
                minVal = nums1[i];
            }
            if(nums1[i] % 2 == 0){
                isAllEven = true;
            } else {
                isAllOdd = true;
            }
        }

        if(!isAllEven || !isAllOdd){
            return true;
        }

        if(minVal % 2 != 0){
            return true;
        }

        return false;
    }
};