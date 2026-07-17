class Solution {
public:
    int reverse(int x) {
        int a = x;
        if(a%2!=0){
            a = a*(-1);
        }

        vector<int> digits;

        while(a!=0){
            int num = a%10;
            digits.push_back(num);
            a = a/10;
        }
        long long b = 0;
        for(int i = 0; i<digits.size(); i++){
            b = b*10 + digits[i];
        }
        if(x%2!=0){
            b = b*(-1);
        }
        if(b > INT_MAX || b < INT_MIN){
            return 0;
        }
        return (int)b;
    }
};