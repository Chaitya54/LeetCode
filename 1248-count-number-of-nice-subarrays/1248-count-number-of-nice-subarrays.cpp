class Solution {
public:
    int lessthanequaltok(vector<int> nums, int k){
        if(k<0){
            return 0;
        }
        int n = nums.size();
        int l = 0;
        int r = 0;
        int cnt = 0;
        int odd = 0;
        while(r<n){
            odd += nums[r]%2;
            while(odd>k){
                odd -= nums[l]%2;
                l++;
            }
            cnt += r-l+1;
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return lessthanequaltok(nums,k) - lessthanequaltok(nums,k-1);
    }
};