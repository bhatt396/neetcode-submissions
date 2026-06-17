class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0, xor2 = 0;

        for(int i = 0; i < n; i++) {
            xor1 ^= i;        // 0 to n-1
            xor2 ^= nums[i];  // array values
        }

        xor1 ^= n; // include last number

        return xor1 ^ xor2;
    }
};