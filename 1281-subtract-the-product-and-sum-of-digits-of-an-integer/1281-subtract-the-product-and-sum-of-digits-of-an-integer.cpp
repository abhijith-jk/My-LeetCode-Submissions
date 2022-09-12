class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit = 0, sum = 0, product = 1;
        while(n>0){
            digit = n%10;
            product *= digit;
            sum += digit;
            n /= 10;
        }
        return product - sum;
    }
};