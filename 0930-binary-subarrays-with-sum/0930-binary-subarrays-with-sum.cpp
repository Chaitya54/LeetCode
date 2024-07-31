class Solution {
public:
    int lessthanequaltogoal(vector<int> nums, int goal){
        if(goal<0){
            return 0;
        }
        int n = nums.size();
        int l = 0;
        int r = 0;
        int cnt = 0;
        int sum = 0;
        while(r<n){
            sum += nums[r];
            while(sum>goal){
                sum -= nums[l];
                l++;
            }
            cnt += r-l+1;
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return lessthanequaltogoal(nums, goal) - lessthanequaltogoal(nums, goal - 1);
    }
};