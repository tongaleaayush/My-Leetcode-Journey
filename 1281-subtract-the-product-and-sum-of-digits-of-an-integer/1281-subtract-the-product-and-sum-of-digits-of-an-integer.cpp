class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> digits={};
        while(n!=0){
            int num = n%10;
            digits.push_back(num);
            n=n/10;
        }
        int product = 1;
        int sum = 0;
        for(int i=0; i<digits.size();i++){
            product = product*digits[i];
            sum += digits[i];
        }
        return product-sum;
    }
};