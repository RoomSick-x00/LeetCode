class Solution {
    public:
        int countDigits(int num) {
            int original = num;
            vector<int> digits;
            int count = 0;
            while (num != 0) {
                digits.push_back(num % 10);
                num = num / 10;
                count++;
            }
            int countDig=0;
            for(int i=0; i<count; i++){
                if(original%digits[i]==0) countDig++;
            }
            return countDig;
        }
    };