class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        int ans = INT_MAX;
        int left = 0;
        int sum = 0;

        vector<int> best(n, ans);

        for (int right = 0; right < n; right++) {
            sum += arr[right];

            while (sum > target) {
                sum -= arr[left];
                left++;
            }

            if (right > 0) {
                best[right] = best[right - 1];
            }
            if (sum == target) {
                int currlength = right - left + 1;

                if (left > 0 && best[left - 1] != INT_MAX) {
                    ans = min(ans, best[left - 1] + currlength);
                }

                best[right] = min(best[right], currlength);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};