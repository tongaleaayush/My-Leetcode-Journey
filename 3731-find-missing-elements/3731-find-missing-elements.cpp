class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> miss;
        sort(nums.begin(), nums.end());

        for(int i=nums[0]; i<nums[nums.size()-1];i++){
            auto it = find(nums.begin(), nums.end(), i);
            if(it==nums.end()){
                miss.push_back(i);
            }
        }
        sort(miss.begin(), miss.end());
        return  miss;

    }
};