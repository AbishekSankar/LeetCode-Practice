#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& v, int t) {
    vector<int> a;
    for (size_t i = 0; i < v.size(); i++) {
        for (size_t j = i + 1; j < v.size(); j++) {
            if ((v[i] + v[j]) == t) {
                a.push_back(i);
                a.push_back(j);
            }
        }
    }
    return a;
}

int main() {
    vector<int> v{3, 2, 4};
    int t = 6;
    vector<int> ans = twoSum(v, t);
    for (auto a : ans) cout << a << " ";
    return 0;
}
