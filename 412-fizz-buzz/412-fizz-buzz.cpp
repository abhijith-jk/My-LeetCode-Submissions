class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> array;
        for(int i = 1; i<=n; i++){
            string str = to_string(i);
            if(i % 3 == 0 && i % 5 == 0)
                array.push_back("FizzBuzz");
            else if(i % 3 == 0)
                array.push_back("Fizz");
            else if(i % 5 == 0)
                array.push_back("Buzz");
            else
                array.push_back(str);
        }
        return array;
    }
};