class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int left = 0; 
        int right = 1;
        vector<int> digits;
        string s = "123456789";
        for (left = 0; left < s.size(); left++) {
            for(right = left+1; right<s.size(); right++){
                int num = stoi(s.substr(left, right - left + 1));
                if(num>=low && num<=high){
                    digits.push_back(num);
                }
            }
        }
        sort(digits.begin(), digits.end());

        return digits;
    }
};