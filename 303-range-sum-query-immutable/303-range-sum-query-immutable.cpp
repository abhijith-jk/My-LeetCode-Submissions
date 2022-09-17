class NumArray {
public:
    NumArray(vector<int>& nums) {
        int i, sum{}, size = nums.size();
        for (i = 0; i < size; ++i) {
            sum+=nums[i];
            _acum.emplace_back(sum);
        }
        return;
    }
    
    int sumRange(int left, int right) {
        if (left > 0) {
            return _acum[right]-_acum[left-1];
        } else {
            return _acum[right];
        }
    }
private:
    vector<int> _acum;
};
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

