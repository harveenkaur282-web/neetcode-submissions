class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        unordered_map<char, int> freq;
        for (int i = 0; i < s.size(); i++){
            freq[i]++;
        }
        for (int i = 0; i<t.size(); i++){
            freq[i]--;
        }
        for (int i = 0; i < s.size() ; i++){
            if (freq[i] == 0){
                return true;
            }
        }
    }
};
