class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.size();
        int cnt = 0;
        int i = 1;
        while (i < n) {
            if (word[i] == word[i - 1]) {
                cnt++;
            }
            i++;
        }
        return cnt + 1;
    }
};