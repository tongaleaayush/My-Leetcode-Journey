class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        vector<long long> res={};
        while(n!=0){
            int digit = n%10;
            if(digit!=0){
                res.push_back(digit);
            }
            n = n/10;
        }
        reverse(res.begin(), res.end());
        for(int i=0; i<res.size(); i++){
            sum = sum + res[i];
        }
        
        long long x= 0;
        for(int i=0; i<res.size(); i++){
            x = x*10 + res[i];
        }
        long long product = x*sum;
        return product;
    }
};