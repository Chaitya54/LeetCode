class Solution {
public:
    int characterReplacement(string s, int k) {
        vector <int> hash(26,0);
        int l = 0;
        int r = 0;
        int max_c = 0;
        int maxlen = 0;
        int n = s.size();
        while(r<n){
            hash[s[r]-'A']++;
            max_c = max(max_c, hash[s[r]-'A']);
            if(r-l+1-max_c>k){
                hash[s[l]-'A']--;
                max_c = 0;
                l++;
            }
            if(r-l+1-max_c<=k){
                maxlen = max(maxlen, r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};