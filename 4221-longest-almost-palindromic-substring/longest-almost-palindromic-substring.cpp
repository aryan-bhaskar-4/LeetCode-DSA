class Solution {
public:
    bool isPalindrome(const string& s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    
    int almostPalindromic(string s) {
        string lanorivequ = s;
        int n = lanorivequ.length();
        int maxLen = 0;

        
        for (int i = 0; i < n; ++i) {   
            for (int j = i + maxLen; j < n; ++j) {
                int left = i;
                int right = j;
                bool possible = false;

                
                while (left < right) {
                    if (lanorivequ[left] == lanorivequ[right]) {
                        left++;
                        right--;
                    } else {
                    
                        if (isPalindrome(lanorivequ, left + 1, right) || 
                            isPalindrome(lanorivequ, left, right - 1)) {
                            possible = true;
                        }
                        break;
                    }
                }

        
                if (left >= right) possible = true;

                if (possible) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }

        return maxLen;
    }
};