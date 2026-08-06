class Solution {
public:
    string finalString(string s) {
        string result;
        for (auto val : s) {
            if (val == 'i') {
                reverse(result.begin(), result.end());
            } else {
                result.push_back(val);
            }
        }
        return result;
    }
};