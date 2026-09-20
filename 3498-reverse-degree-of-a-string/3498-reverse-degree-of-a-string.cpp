class Solution {
public:
    int reverseDegree(string s) {
        int degree = 0;
        for(int i=0; i<s.length(); i++){
            int prod = (i+1) * ( 26 - (s[i] - 'a'));
            degree += prod;
        }
        return degree;
    }
};