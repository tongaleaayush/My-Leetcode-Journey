class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n= nums.size();
        vector<int> m(2*n);
        for(int i=0; i<n;i++){
            m[i]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            m[i+n]=nums[i];
        }
        return m;
    }
};