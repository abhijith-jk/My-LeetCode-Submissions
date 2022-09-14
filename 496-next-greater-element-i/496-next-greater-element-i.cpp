class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int size =  nums2.size();
        unordered_map<int, int> nextGE;
        for(int i = 0; i<size; i++){
            for(int j=i; j<size; j++){
                if(nums2[j]> nums2[i]){
                    nextGE[nums2[i]] = nums2[j];
                    break;
                }
                else
                    nextGE[nums2[i]] = -1;
            }
        }
        
        vector<int> res;
        for(int i=0; i<nums1.size(); i++) {
            res.push_back(nextGE[nums1[i]]);
        }
        return res;
    }
};