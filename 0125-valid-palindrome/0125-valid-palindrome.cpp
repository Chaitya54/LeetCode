class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
        for(char c : s){
            if(!isspace(c) && !ispunct(c) && isalnum(c)){
                s2 += tolower(c);
            }
        }
        for(int i=0; i<s2.size()/2; i++){
            if(s2[i]!=s2[s2.size()-i-1]){
                return false;
            }
        }
        return true;
    }
};