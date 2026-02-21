class Solution {
public:
    bool isPrime(int n){
        if(n == 0 || n == 1){
            return false;
        }

        for(int i=2;i<=sqrt(n);i++){
            if(n % i == 0){
                return false;
            }
        }

        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count = 0;

        for(int i=left;i<=right;i++){
            int num=i;
            int bits = 0;
            while(num){
                if(num&1){
                    ++bits;
                }
                num>>=1;
            }
            if(isPrime(bits)){
                count++;
            }
        }

        return count;
    }
};