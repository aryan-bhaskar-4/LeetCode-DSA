class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        

        int st = 0;
        int end = n-1;
        while(st <= end){
            swap(s[st],s[end]);
            st++;
            end--;
        }

        int count = 0;
        int i = 0;
        while(i < n){
            if(s[i] == ' '){
                i++;
            } else {
                break;
            }
            
        }

        while(i < n){
            if(s[i] == ' '){
                break;
            }
            i++;
            count++;
        }

        return count;
    }
};