class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<int,int> mp;
        for(int x : s){
            mp[x]++;
        }
        for(int x : t){
            mp[x]--;
        }

        for(auto x : mp){
            if(x.second > 0){
                return false;
            }
        }
        return true;
    }
};
