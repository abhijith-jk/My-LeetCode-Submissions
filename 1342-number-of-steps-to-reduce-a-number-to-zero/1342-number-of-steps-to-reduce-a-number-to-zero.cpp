class Solution {
public:
    int numberOfSteps(int num) {
        int count_steps = 0;
        while(num>0){
            if(num % 2 == 0)
                num /= 2;
            else
                num -= 1;
            count_steps++;
        }
        return count_steps;
    }
};