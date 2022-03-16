#include <iostream>
#include <vector>
using namespace std;

/* O(N) Solution
vector<int> buildArray(vector<int>& nums) {
    vector<int> ans;
    for (size_t i = 0; i < nums.size(); i++) ans.push_back(nums[nums[i]]);
    return ans;
} */

/*
O(1) Solution

Notes :

Primer:
When you have 2 values, x and y, you can store them in the same value using combinedValue = x + y *
n given than n is sufficiently bigger than both x and y You can then retrieve x by using x =
combined % n and retrieve y using y = combined / n.

Example:
x = 3; y = 4, n = 5.
combined = 3 + 4 * 5 = 3 + 20 = 23
x = 23 % 5 = 3
y = 23 / 5 = 4 (make sure to use the lower_bound value here) */

vector<int> buildArray(vector<int>& nums) {
    int n = nums.size();
    // 'store' both the solution and original value in the same number
    for (int i = 0; i < n; i++) {
        // combined = originalValue + solution * size of array
        // the reason the solution here is (nums[nums[i]] % n) is to make sure we are only
        // accessing and using the original value at index 'i' for the calculation in case nums[i]
        // has already been modified
        nums[i] = nums[i] + (nums[nums[i]] % n) * n;
    }

    for (int i = 0; i < n; i++) {
        // solution value = combined value / n
        nums[i] = nums[i] / n;
    }
    return nums;
}

int main() {
    vector<int> v = {0, 2, 1, 5, 3, 4};
    vector<int> ans = buildArray(v);
    for (auto i : ans) cout << i << " ";
    return 0;
}