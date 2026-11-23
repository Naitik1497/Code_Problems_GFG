class Solution {
public:
    int findEquilibrium(vector<int>& arr) {
        long long totalSum = 0;
        for (int num : arr) {
            totalSum += num;
        }

        long long leftSum = 0;
        for (int i = 0; i < arr.size(); i++) {
            // totalSum - leftSum - arr[i] is the rightSum
            long long rightSum = totalSum - leftSum - arr[i];

            if (leftSum == rightSum) {
                return i;
            }

            leftSum += arr[i];
        }

        return -1;
    }
};