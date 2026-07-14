class Solution {
public:
    int mySqrt(int x) {
        long long low = 0;
        long long high = x;
        long long ans;
        while(low<=high){
            long long mid = (low+high)/2;
            long long check = mid*mid;
            if(check==x){
                return mid;
            }
            if(check<x){
                ans=mid;
                low= mid+1;
            }
            else high= mid-1;

        }
        return ans;
    }
};