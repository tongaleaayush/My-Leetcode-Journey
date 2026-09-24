class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        vector<int> digits = {};
        int smallest = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            while(nums[i]>0){
            int a = nums[i]%10;
            digits.push_back(a);
            nums[i] = nums[i]/10;
            }
            for(int k=0; k<digits.size(); k++){
                sum += digits[k];
            }
            if(sum == i){
                smallest = min(smallest, i);
                }
            digits.clear();
        }
        if(smallest == INT_MAX) return -1;

        return smallest;
    }
};