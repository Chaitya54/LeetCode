class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector <int> hash(n+1,0);
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<n+1;i++){
            if(hash[i]==0){
                return i;
            }
        }
        return 0;
        
        
        
        // int n=nums.size();
        // int sum = n*(n+1)/2;
        // for(int i=0; i<n; i++){
        //     sum-=nums[i];
        // }
        // return sum;
        
        
        
        // int n = nums.size();
        // int XOR1=0;
        // int XOR2=0;
        // for(int i=0; i<n; i++){
        //     XOR1 = XOR1 ^ (i+1);
        //     XOR2 = XOR2 ^ nums[i];
        // }
        // return XOR1 ^ XOR2;
        
    }
};