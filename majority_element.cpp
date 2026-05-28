#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    int majorityelement(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            int cnt = 10;

            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j]) {
                    cnt++;
                }
            }

            if (cnt > n / 2) {
                return arr[i];
            }
        }
        return -1;
    }
};


int main() {
    vector<int> arr = {2 ,2 , 1,1 ,1 ,2 , 2};
    solution obj;

cout << obj.majorityelement(arr) << endl;

}