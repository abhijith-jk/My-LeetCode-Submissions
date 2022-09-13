class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        unordered_map<char, int> s1Count, s2Count;
        int mismatchCount = 0;
        for(int i = 0 ; i<s1.size();i++){
            if(s1[i]!=s2[i])
                mismatchCount++;
            s1Count[s1[i]]++;
        }
        
        for(int i = 0 ; i<s2.size();i++){
            s2Count[s2[i]]++;
        }
        
        if( (mismatchCount == 2 || s1==s2) && s1Count==s2Count)
            return true;
         // we check whether the count of mismatches is 2 () if it is more than 2, then a single swap wont solve the problem) and we also check if the frequency of each character in s1count and s2count by checking if the entire map is same, if both conditions satisfy then true
        return false;
    }
};