#include <iostream>
#include <vector>

using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans(2 * nums.size());
    for (size_t i = 0; i < ans.size(); i++) {
        ans[i] = nums[i];
        ans[i - nums.size()] = nums[i];
    }
    return ans;
}

int main() {
    vector<int> v = {1, 2, 1};
    vector<int> ans = getConcatenation(v);
    for (auto i : ans) cout << i << " ";
    cout << endl;
    return 0;
}