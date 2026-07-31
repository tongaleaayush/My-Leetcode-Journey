class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> freq;
        int ans=0;
        for(int i =0; i<word.size(); i++){
            freq[word[i]]++;
        }
        vector<int> v;
        for(auto it: freq){
            v.push_back(it.second);
        }
        sort(v.rbegin(), v.rend());
        for(int i=0;i<v.size();i++){
            int cost = (i/8) + 1;
            ans+=v[i]*cost;
        }
        return ans;
    }
};