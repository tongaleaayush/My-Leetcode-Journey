class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertpos = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                int temp = nums[insertpos];
                nums[insertpos] = nums[i];
                nums[i] = temp;
                
                insertpos++;
            }
        }
    }
};