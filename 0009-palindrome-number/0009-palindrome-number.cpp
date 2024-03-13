class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0){
            if(x>INT_MAX){
                return false;
            }
            else{
                string s1= to_string(x);
                string s2= s1;
                reverse(s1.begin(),s1.end());
                if(s1==s2){
                    return true;
                }
                else return false;
            }
        }
        else return false;
    }
};