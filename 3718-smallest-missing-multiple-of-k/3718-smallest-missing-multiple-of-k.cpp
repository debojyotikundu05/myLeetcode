class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> s;
        for (int i = 1; i <= 101; i++) {
            s.insert(i);
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % k == 0) {
                int key = nums[i] / k;
                auto it = s.find(key);
                if (it != s.end()) {
                    s.erase(it);
                }
            }
        }
        int mul = *s.begin();
        return mul * k;
    }
};