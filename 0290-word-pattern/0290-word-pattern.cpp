class Solution {
public:
    bool wordPattern(string pattern, string s) {
            vector<string> words;
            stringstream ss(s);
            string word;
            while(ss>>word){
                words.push_back(word);
            }
            int n = pattern.length();
            int m = words.size();
            if(n!=m) return false;
            
            map<char, string> mp1;
            map<string, char> mp2;
            for(int i=0;i<n;i++){
                if(mp1.find(pattern[i])==mp1.end()){
                    mp1[pattern[i]]=words[i];
                }
                if(mp2.find(words[i])==mp2.end()){
                    mp2[words[i]]=pattern[i];
                }
                if(mp1[pattern[i]]!=words[i]) return false;
                if(mp2[words[i]]!=pattern[i]) return false; 
            }

            return true;

    }
};