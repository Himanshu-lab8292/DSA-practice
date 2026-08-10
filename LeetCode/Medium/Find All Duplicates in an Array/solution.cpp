class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int>ans;                             // 1. Answer store karne ke liye
        for (int i=0; i<nums.size();i++){            // 2. Array pe loop
            int index=abs(nums[i])-1;                 // 3. Number se index nikaalo

            if(nums[index]<0){                       // 4. Already negative hai?
                ans.push_back(abs(nums[i]));          // Haan → duplicate
            }
            else{
                nums[index] = -nums[index];            // Nahi → mark kar do
            }
        }
        return ans;                                  // 5. Answer return
    }
};