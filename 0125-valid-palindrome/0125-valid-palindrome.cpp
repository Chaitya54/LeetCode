class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(char c : s){
            if(!isspace(c) && !ispunct(c) && isalnum(c)){
                s1 += tolower(c);
            }
        }
        for(int i=0; i<s1.size()/2; i++){
            if(s1[i]!=s1[s1.size()-i-1]){
                return false;
            }
        }
        return true;
    }
};