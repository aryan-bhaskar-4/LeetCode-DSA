class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string ans = "";

        int i;
        for(i=n-1;i>=0;i--){
            int number = (int)num[i];

            if(number%2 != 0){
                break;
            }
        }

        if(i < 0){
            return "";
        }

        return num.substr(0,i+1);

        // for(int j=0;j<=i;j++){
        //     ans += num[j];
        // }

        // return ans;

        
    }
};