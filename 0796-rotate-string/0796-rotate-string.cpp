class Solution {
public:
    bool rotateString(string s, string goal) {
        string a = s + s;
        if(s.length()!=goal.length()) return false;
        if(a.find(goal)!= string::npos){
            return true;
        } else { return false;}

    }
};