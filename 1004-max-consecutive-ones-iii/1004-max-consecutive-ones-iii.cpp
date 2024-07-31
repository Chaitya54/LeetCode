class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int cnt = 0;
        int l = 0;
        int r = 0;
        int maxlen = 0;
        int n = nums.size();
        while(r<n){
            if(nums[r]==0){
                cnt++;
            }
            if(cnt>k){
                if(nums[l]==0){
                    cnt--;
                }
                l++;
            }
            if(cnt<=k){
               maxlen = max(maxlen, r-l+1); 
            }
            r++;
        }
        return maxlen;
    }
};