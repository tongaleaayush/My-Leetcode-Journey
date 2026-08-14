class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<char, int> mp;
        int maxlength= 0;
        int left =0;
        int right = 0;
        while(right<s.length()){
            mp[s[right]]++;
            while(mp[s[right]]>2){
                mp[s[left]]--;
                left++;
            }
            int length = right-left+1;
            maxlength = max(maxlength, length);
            right++;

        }
return maxlength;
        
    }
};