class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int operation = 1;
        int n = nums.size();
        vector<int> arr1={};
        vector<int> arr2={};
        if(operation==1){
            arr1.push_back(nums[0]);
            operation++;
        }
        if(operation==2){
            arr2.push_back(nums[1]);
            operation++;
        }
        for(operation=2;operation<n;operation++){
            if(arr1.back()>arr2.back()){
                arr1.push_back(nums[operation]);
            }
            else{
                arr2.push_back(nums[operation]);
            }
        }
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());

        return arr1;
        
    }
};