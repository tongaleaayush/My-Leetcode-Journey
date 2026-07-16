class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd;
        int mx = 0;

        for(int i = 0; i<nums.size(); i++){
            mx = max(mx, nums[i]);
            prefixGcd.push_back(__gcd(nums[i], mx));
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        long long ans =0;
        int left = 0;
        int right = prefixGcd.size()-1;

        while(left<right){
            ans+= __gcd(prefixGcd[left], prefixGcd[right]);

            left++;
            right--;
        }
        return ans;
    }
};