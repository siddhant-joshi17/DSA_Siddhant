#include <bits/stdc++.h>
using namespace std;

class solution {
public:
vector<int> leaderfinder(vector<int> &arr) {
    int n = arr.size();
    vector<int> ans;
    int max = arr [n-1];
    ans.push_back(max);
    for (int i = n-2; i>=0; i--) {
        if (arr[i] > max) {
            max = arr[i];
            ans.push_back(max);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}




};


int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    solution obj;
    vector<int> result = obj.leaderfinder(arr);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}