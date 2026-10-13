class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ansum = 0;
        vector<int> sqr(nums.size());
        for(int i = 0; i<nums.size(); i++){
            sqr[i] = nums[i]*nums[i];
        }
        sort(sqr.begin(), sqr.end());
        int n = sqr.size();
        for(int j=0; j<n/2; j++){
            ansum -= sqr[j];
        }
        for(int j=(n/2); j<n; j++){
            ansum += sqr[j];
        }
        return ansum;
    }
};