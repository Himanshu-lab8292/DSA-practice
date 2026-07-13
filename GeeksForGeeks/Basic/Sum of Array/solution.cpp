class Solution {
  public:
    int arraySum(vector<int>& arr) {
        int total_sum=0;
        
        for(int i=0; i<arr.size();i++){
            total_sum=total_sum+arr[i];
        }
        return total_sum;
    }
};