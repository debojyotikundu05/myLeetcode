class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int num = n;
        while (n != 0) {
            int rem = n % 10;
            n = n / 10;
            sum += rem;
            product *= rem;
        }
        sum += product;
        return !(num % sum);
    }
};