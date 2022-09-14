class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int size =  nums2.size();
        unordered_map<int, int> nextGE; // Initialize a map to store the next GE of all elements in nums2
        for(int i = 0; i<size; i++){
            for(int j=i; j<size; j++){
                if(nums2[j]> nums2[i]){  // if we find an element greater than the current element to the right in nums2, we store that element as key and the next GE as value for the key
                    nextGE[nums2[i]] = nums2[j];
                    break;
                }
                else
                    nextGE[nums2[i]] = -1; // if we don't find a GE, then we store -1 as the value for the current element
            }
        }
        
        vector<int> res; // output array into which we will push all of the map where the key is same as the element of nums1 
        for(int i=0; i<nums1.size(); i++) {
            res.push_back(nextGE[nums1[i]]);
        }
        return res;
    }
};