class Solution {
    public:
        bool isPrime(int n) {
            //your code goes here
            for(int i=2; i<=sqrt(n); i++){
                if(n%i == 0) return false;
            }
            return true;
        }
    };