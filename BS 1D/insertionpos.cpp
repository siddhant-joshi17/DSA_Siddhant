#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& arr, int x) {
        int low = 0, high = arr.size() - 1;
        int ans = arr.size(); // Default to size if x is greater than all elements

while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] >= x) {
                // Potential answer found, try to go left
                ans = mid;
                high = mid - 1;
            } else {
                // Go right
                low = mid + 1;
            }
        }

        return ans;
    }
};


int main() {
    Solution sol;
    vector<int> arr = {1, 3, 5, 6};
    int x = 5;
    cout << sol.searchInsert(arr, x) << endl; // Output: 2

    x = 2;
    cout << sol.searchInsert(arr, x) << endl; // Output: 1

    x = 7;
    cout << sol.searchInsert(arr, x) << endl; // Output: 4

    x = 0;
    cout << sol.searchInsert(arr, x) << endl; // Output: 0

    return 0;
}
