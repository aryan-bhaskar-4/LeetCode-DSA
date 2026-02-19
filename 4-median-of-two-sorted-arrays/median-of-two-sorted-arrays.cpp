class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int i=n-1;
        int j=m-1;
        int idx = n+m;
        vector<int> ans(idx);
        int sz = idx-1;

        

        while(i >= 0 && j >= 0){
            if(nums1[i] > nums2[j]){
                ans[sz] = nums1[i--];
                sz--;
            } else {
                ans[sz] = nums2[j--];
                sz--;
            }
        }

        while(j >= 0){
            ans[sz--] = nums2[j--];
        }

        while(i >= 0){
            ans[sz--] = nums1[i--];
        }

        int n1 = ans.size();
        double mid = n1/2;
        if(n1%2!=0){
            return ans[mid];
        } else {
            double finalans = (double)(ans[mid] + ans[mid-1])/2;
            return finalans;
        }
    }
};