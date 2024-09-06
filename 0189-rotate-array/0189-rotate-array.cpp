class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n = nums.size();
        k = k % n;  // Handle cases where k is larger than the size of the array

        // Create a temporary array to store the result
        vector<int> temp(n);

        // Place elements in their new positions
        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];
        }

        // Copy the result back to the original array
        for (int i = 0; i < n; i++) {
            nums[i] = temp[i];
        }
    }
};