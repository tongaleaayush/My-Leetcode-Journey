class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        bool a = false;
        int temp = n;
        while (n!=0) {
            sum += n % 10;
            product = product * (n % 10);
            n /= 10;
        }
        
        if (temp % (sum + product) == 0)
            a = true;

        return a;
    }
};