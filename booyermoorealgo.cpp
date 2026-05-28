#include <iostream>
#include <vector>
using namespace std;

int majorityElementBoyerMoore(vector<int>& nums) {
    int count = 0;
    int candidate = 0;

    // Phase 1: Find the candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        
        if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2 (Optional depending on problem constraints): 
    // Verify if the candidate is actually a majority element.
    // If the problem guarantees a majority element always exists, you can skip this.
    int verifyCount = 0;
    for (int num : nums) {
        if (num == candidate) verifyCount++;
    }

    if (verifyCount > nums.size() / 2) {
        return candidate;
    }

    return -1; // No majority element exists
}

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    cout << "The majority element is: " << majorityElementBoyerMoore(arr) << endl;
    return 0;
}