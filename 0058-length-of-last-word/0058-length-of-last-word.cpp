class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int fcount = 0;
        int end = s.size()-1;
        for(int i = 0; i<s.size(); i++){
            if(s[i]!= 32){
                count++;
                fcount = count;
            }
            if(s[i]== 32){
                count = 0;
            }
           
        }
        return fcount;
    }
};