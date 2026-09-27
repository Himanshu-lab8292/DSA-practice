int firstocc(vector<int>& arr, int n, int target) {
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end) {
        if (arr[mid] == target) {
            ans = mid;
            end = mid - 1; // Left side aur check karo
        }
        else if (target > arr[mid]) {
            start = mid + 1;
        }
        else if (target < arr[mid]) {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int lastocc(vector<int>& arr, int n, int target) {
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end) {
        if (arr[mid] == target) {
            ans = mid;
            start = mid + 1; // Right side aur check karo
        }
        else if (target > arr[mid]) {
            start = mid + 1;
        }
        else if (target < arr[mid]) {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        
        int first = firstocc(nums, n, target);
        int last = lastocc(nums, n, target);

        return {first, last};
    }
};