class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> present(nums.begin(), nums.end());
        int multiplier = 1;
        while (true) {
            int target = multiplier * k;
            if (present.find(target) == present.end()) {
                return target;
            }
            multiplier++;
        }
    }
};