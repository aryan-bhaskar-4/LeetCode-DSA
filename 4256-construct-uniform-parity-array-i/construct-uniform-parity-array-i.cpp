class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        vector<int> nums2(n,0);
        bool isAllEven = true;
        bool isAllOdd = true;

        for(int i=0;i<n;i++){
            if(nums1[i] % 2 != 0){
                isAllEven = false;
            } else {
                isAllOdd = false;
            }
        }

        if(isAllEven){
            return true;
        }

        if(isAllOdd){
            return true;
        }


        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums1[i] % 2 == 0){
                    nums2[i] = nums1[i];
                } else if(nums1[i] % 2 != 0 && i != j){
                    nums2[i] = nums1[i] - nums1[j];
                    if(nums2[i] % 2 == 0){
                        break;
                    }
                }
            }
        }

        isAllEven = true;

        for(int i=0;i<n;i++){
            if(nums2[i] % 2 != 0){
                isAllEven = false;
            }
        }

        if(isAllEven){
            return true;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums1[i] % 2 != 0){
                    nums2[i] = nums1[i];
                } else if(nums1[i] % 2 == 0 && i != j){
                    nums2[i] = nums1[i] - nums1[j];
                    if(nums2[i] % 2 != 0){
                        break;
                    }
                }
            }
        }

        isAllOdd = true;

        for(int i=0;i<n;i++){
            if(nums2[i] % 2 == 0){
                isAllOdd = false;
            }
        }

        if(isAllOdd){
            return true;
        }

        return false;  
    }
};