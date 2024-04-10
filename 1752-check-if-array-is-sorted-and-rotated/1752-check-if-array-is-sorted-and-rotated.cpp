// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int n = nums.size();
//         int min = nums[0];
//         int start = -1;
//         for(int i=1; i<n; i++){
//             if(nums[i]>=nums[i-1]){
                
//             }
//             else{
//                 start=i;
//                 break;
//             }
//         }
//         if(start == -1){
//             return true;
//         }
//         else if(start == n-1 && nums[n-1]>min){
//             return false;
//         }
//         else{
//             for(int i = start+1 ; i<n; i++){
//                 if(nums[i]>=nums[i-1] && nums[i]<=min){
                
//                 }
//                 else{
//                     return false;
//                 }
//             }
//             return true;
//         }
//     }
// };



class Solution {
public:
    bool check(vector<int> nums) {
        int cnt = 0;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            if (nums[i] > nums[(i + 1) % n]) {
                ++cnt;
            }
        }
        return cnt <= 1;
    }
};