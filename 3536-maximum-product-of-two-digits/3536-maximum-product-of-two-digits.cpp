class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;
        while(n!=0){
            int a = n%10;
            digits.push_back(a);
            n = n/10;
        }
        sort(digits.begin(), digits.end());
        return digits[digits.size()-2]*digits[digits.size()-1];
    }
};