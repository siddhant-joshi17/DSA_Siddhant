#include <bits/stdc++.h>
using namespace std;

class floorandceil{
public:
    int findFloor(int arr[], int n, int x) {
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] <= x) {
                ans = arr[mid];     // Potential floor
                low = mid + 1;      // Search right side
            } else {
                high = mid - 1;     // Search left side
            }
        }
        return ans;
    }

    // Function to find the ceiling of x
    int findCeil(int arr[], int n, int x) {
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= x) {
                ans = arr[mid];     // Potential ceil
                high = mid - 1;     // Search left side
            } else {
                low = mid + 1;      // Search right side
            }
        }
        return ans;
    }

    // Function to return both floor and ceil
    pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
        int f = findFloor(arr, n, x);
        int c = findCeil(arr, n, x);
        return make_pair(f, c);
    }
};


int main() {
    floorandceil fc;
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    pair<int, int> result = fc.getFloorAndCeil(arr, n, x);
    cout << "Floor: " << result.first << ", Ceil: " << result.second << endl; // Output: Floor: 2, Ceil: 8

    x = 20;
    result = fc.getFloorAndCeil(arr, n, x);
    cout << "Floor: " << result.first << ", Ceil: " << result.second << endl; // Output: Floor: 19, Ceil: -1

    x = 0;
    result = fc.getFloorAndCeil(arr, n, x);
    cout << "Floor: " << result.first << ", Ceil: " << result.second << endl; // Output: Floor: -1, Ceil: 1

    return 0;
}