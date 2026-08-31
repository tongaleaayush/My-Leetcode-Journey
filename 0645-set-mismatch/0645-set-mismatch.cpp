class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int duplicate=-1;
        int missing=-1;
        sort(nums.begin(), nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                duplicate = nums[i];
            }
            else if(nums[i]>nums[i-1]+1){
                missing = nums[i]-1;
            }
        }
        if(nums[0]!=1){
            missing =1;
        }else if(nums[nums.size() - 1] != nums.size()) {
            missing = nums.size();
        }
        
        return {duplicate, missing};
    }
};