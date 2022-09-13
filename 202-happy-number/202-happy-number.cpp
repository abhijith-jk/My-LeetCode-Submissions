class Solution {
public:
    bool isHappy(int n) {
        if(n == 1 || n == 7)
            return true;
        else if(n<10)
            return false;
        int digit = 0, sum = 0;
        while(n != 0){
            digit = n%10;
            sum += pow(digit,2);
            n /= 10;
        }
        return isHappy(sum);
    }
};
