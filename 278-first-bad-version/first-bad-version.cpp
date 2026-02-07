// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=0;
        int j=n;

        while(i <= j){
            int mid = i + (j-i)/2;

            if(isBadVersion(mid) && !isBadVersion(mid-1)){
                return mid;
            } else if(!isBadVersion(mid)){
                i = mid+1;
            } else {
                j = mid-1;
            }
        }

        return 1;
    }
};