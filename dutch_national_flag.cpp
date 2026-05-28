#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    void count(vector<int>& arr) {
        int low = 0, mid = 0, high = arr.size() - 1;
        while (mid <= high) {
            if (arr[mid] == 0) {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            } else if (arr[mid] == 1) {
                mid++;
            } else if (arr[mid] == 2) {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};

int main() {
    vector<int> arr = {0 , 2 ,1 ,2 , 1 , 0};
    solution obj;
    obj.count(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << "";
    }
}