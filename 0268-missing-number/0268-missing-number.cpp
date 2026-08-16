class Solution{
public:
    int missingNumber(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int count=0;
        while(count<nums.size()){
            if(nums[count]!=count) return count;
            count++;
        }
        return count;
    }
};