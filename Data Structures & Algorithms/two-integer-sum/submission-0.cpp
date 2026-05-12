class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int x = 0; x < nums.size(); x++){
            int need = target - nums[x];
            auto it = mp.find(need);
            if(it != mp.end()){
                return {it -> second,x};
            }
            mp[nums[x]] = x;
        }
        return {};
    }
};
