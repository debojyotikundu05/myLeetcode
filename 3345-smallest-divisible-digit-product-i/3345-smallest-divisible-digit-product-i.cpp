class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans = n;
        while (true) {
            int pro = 1;
            int rem = 0;
            int temp = ans;
            while (temp != 0) {
                rem = temp % 10;
                pro = pro * rem;
                temp = temp / 10;
            }
            if (pro % t == 0)
                return ans;
            ans++;
        }
    }
};