class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int maxm = -1;
        int n=nums.size();
        unordered_map<int, int> freq;
        for(int i=0; i<n;i++){
            freq[nums[i]]++;
        }
        if(k==1){
            for(int i=0;i<n;i++){
                if(freq[nums[i]]==1){
                    maxm = max(maxm, nums[i]);
                }
            }
            return maxm;
        }
        else if(k==n){
            maxm = *max_element(nums.begin(), nums.end());
        }
        else{
            if(freq[nums[0]]==1){
                maxm = max(maxm, nums[0]);
            }
            if(freq[nums[n-1]]==1){
                maxm = max(maxm, nums[n-1]);
            }
            
        }
        return maxm;
    }
};