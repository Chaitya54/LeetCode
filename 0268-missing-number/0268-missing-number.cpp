class Solution {
public:
    int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         int hash[n+1];
//         for(int i = 0; i<n; i++){
//             hash[nums[i]] = 1;
//         }
//         for(int i = 1; i<n+1; i++){
//             if(hash[i] == 1){
                
//             }
//             else{
//                 return i;
//             }
//         }
//         return 0;
        
        int n=nums.size();
        int sum = n*(n+1)/2;
        for(int i=0; i<n; i++){
            sum-=nums[i];
        }
        return sum;
    }
};