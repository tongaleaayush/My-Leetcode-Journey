class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> set ={};

        for(int i=0; i<nums.size(); i++){
            if(nums[i]%k==0){
                set.insert(nums[i]);
            }
        }
        int i=1;
while(1){
    int a=k*i;
    auto it = set.find(a);
    if(it==set.end()){
        return a;
    }
    i++;
}
return 0;
    }
};