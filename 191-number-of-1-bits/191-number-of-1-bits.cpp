class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0, i = 0;
        while(i<32){      // since n is a 32 bit input, the loop will run 32 times
            if(n&1==1)    // n represents the current bit, if the current bit is 1, then 1&1 = 1, then count++.
                count++;
            n = n>>1;     // shifts n by 1 bit to the right
            i++;
        }
        return count;
    }
};