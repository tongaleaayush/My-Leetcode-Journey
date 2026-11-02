class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int median;
        int n = nums.size();
        median = nums[n/2];
        int moves = 0;
        for(int i=0; i<n; i++){
            moves = moves + abs(median - nums[i]);
        }
    return moves;
    }
};