class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long n = arr.size()+1;
        long real = (n*(n+1))/2;
        int sum = 0;
        for(int i=0;i<n-1;i++){
            sum+=arr[i];
        }
        return (real-sum);
    }
};