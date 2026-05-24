class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> map;
        int l = 0, res = 0;
        for(int r = 0;r<s.size();r++){
            while(map.find(s[r]) != map.end()){
                map.erase(s[l]);
                l++;
            }
            map.insert(s[r]);
            res = max(res,r-l+1);
        }
        return res;
    }
};
