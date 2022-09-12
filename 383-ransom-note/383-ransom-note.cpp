class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // rnoteCharCount map will store ransomNote character count
        // magCharCount map will store magazine character count

        map<char, int> rnoteCharCount;
        map<char, int> magCharCount;

        // create set to store unique value. it will be easy to check unique value count in mapping. will store ransomNote unique value
        set<char> rnoteUniqueChars;
        int result;

        // loop for counting ransomeNote charater count
        for (int i = 0; i < ransomNote.size(); i++) {
            rnoteCharCount[ransomNote[i]]++;
            rnoteUniqueChars.insert(ransomNote[i]);
        }
        // loop for counting magazine charater count
        for (int i = 0; i < magazine.size(); i++) {
            magCharCount[magazine[i]]++;
        }
        // transversing set and comparing mapping count for specific character.
        for (char u : rnoteUniqueChars) {
        if(rnoteCharCount[u]<=magCharCount[u]){
        result=1;
        continue;
        }
        else{
        result=0;
        break;
        }
        }
        return result;
        }
};