class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves=0;
        int mx = INT_MIN;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            mx = max(mx, nums[i]);
        }
        for(int i = 0; i<n; i++){
            moves+=abs(nums[i] - mx);
        }
        return moves;
    }
};