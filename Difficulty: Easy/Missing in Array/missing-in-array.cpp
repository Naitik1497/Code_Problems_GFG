class Solution {
public:
    int missingNum(vector<int>& arr) {
        long long n = arr.size() + 1;

        // Sum of first n natural numbers
        long long totalSum = n * (n + 1) / 2;

        // Calculate sum of elements in arr
        long long arrSum = 0;
        for (int num : arr) {
            arrSum += num;
        }

        // The difference is the missing number
        return totalSum - arrSum;
    }
};