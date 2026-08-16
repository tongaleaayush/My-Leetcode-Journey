class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        bool flag = true;
        long long num = 0;
        long long limit = (long long)INT_MAX;
        while(i<s.length() && s[i]==' '){
            i++;
            if(i==s.length()) return num;
        }
        if(s[i]=='+') {
            flag = true;
            i++;
        }
        else if(s[i]=='-') {
            flag = false;
            i++;
        }
        while(i<s.length() && s[i]>= 48 && s[i]<=57){
            int digit = s[i] - '0';
            if(flag == true){
            if(num>(limit - digit)/10){
                return INT_MAX;
            }
            }
            else{
                if(num>(limit+1 - digit)/10){
                return INT_MIN;
            }
            }
            num = num*10 + digit;
            i++;
        }
        if(flag == false) num = -1*num;
        return num;
    }
};