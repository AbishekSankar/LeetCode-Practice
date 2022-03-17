#include <iostream>
#include <vector>

using namespace std;

// Efficient Solution O(N)
vector<int> runningSum(vector<int>& nums) {
    for (size_t i = 1; i < nums.size(); i++) nums[i] += nums[i - 1];
    return nums;
}

// My solution O(n^2)
// vector<int> runningSum(vector<int>& nums) {
//     vector<int> ans = nums;
//     int sum = 0;
//     for (size_t i = 0; i < nums.size(); i++) {
//         for (size_t j = 0; j <= i; j++) sum += nums[j];
//         ans[i] = sum;
//         sum = 0;
//     }
//     return ans;
// }

int main() {
    vector<int> v = {1, 2, 3, 4};
    vector<int> a = runningSum(v);
    for (int i : a) cout << i << " ";
    cout << endl;
    return 0;
}
