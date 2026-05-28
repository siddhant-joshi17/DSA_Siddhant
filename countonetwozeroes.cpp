#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    void sortzerosonetwo(vector<int>& arr) {
        int count0 = 0, count1 = 0, count2 = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                count0++;
            } else if (arr[i] == 1) {
                count1++;
            } else if (arr[i] == 2) {
                count2++;
            }

        }
        int i = 0;
        while (count0--) {
            arr[i++] = 0;
        }
        while (count1--) {
            arr[i++] = 1;
        }
        while (count2--) {
            arr[i++] = 2;
        }
    }
};


int main() {
    vector<int> arr = {0 , 2 ,1 ,2 , 1 , 0};
    solution obj;
    obj.sortzerosonetwo(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << "";
    }
}