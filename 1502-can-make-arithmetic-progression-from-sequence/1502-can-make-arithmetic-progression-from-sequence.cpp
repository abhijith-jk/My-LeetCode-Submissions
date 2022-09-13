class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size() == 2)
            return true;
        sort(arr.begin(),arr.end());
        int diff = arr[arr.size()-1] - arr[arr.size()-2];
        for(int i = arr.size()-1; i > 0; i--){
            if(arr[i] - arr[i-1] != diff)
                return false;
        }
        return true;
    }
};