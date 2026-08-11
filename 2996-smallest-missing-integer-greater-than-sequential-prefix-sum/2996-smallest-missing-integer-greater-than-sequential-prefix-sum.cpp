class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        for(int i=1;i<nums.size(); i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            } else{ break;}
        }
        int i=sum;
        while(1){
            auto it=find(nums.begin(), nums.end(), i);
            if(it==nums.end()){
                return i;
            }
            else {i++;}
        }
        return 0;
    }
};