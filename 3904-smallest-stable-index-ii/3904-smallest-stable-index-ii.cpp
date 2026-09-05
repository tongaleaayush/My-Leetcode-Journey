class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int minimum = nums[n-1];
        int maximum = -1;
        vector<int> rightmin(n);
        rightmin[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            rightmin[i] = min(rightmin[i+1], nums[i]);
        }
        for(int i=0; i<n;i++){
           maximum = max(maximum, nums[i]);

           int score=maximum-rightmin[i];
           if(score<=k) return i;
        }
        return -1;
    }
};