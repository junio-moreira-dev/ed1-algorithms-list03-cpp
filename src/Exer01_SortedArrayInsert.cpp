//
// Created by Junio Moreira on 2026-08-27.
//

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

class Solution {
public:
    vector<ll> searchInsertAndShift(const vector<ll>& nums, ll target) {
        int n = nums.size();

        return {};
    }
};

void printVector(const vector<ll>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << (i + 1 < v.size() ? ", " : "");
    }
    cout << "]";
}

int main() {
    Solution solution;

    // Test 1
    vector<ll> in1 = {1, 3, 6, 7};
    ll target1 = 5;
    vector<ll> exp1 = {1, 3, 5, 6, 7};
    vector<ll> out1 = solution.searchInsertAndShift(in1, target1);

    cout << "--- Test 1 ---\n";
    cout << "Input:    "; printVector(in1); cout << " | Target = " << target1 << "\n";
    cout << "Expected: "; printVector(exp1); cout << "\n";
    cout << "Output:   "; printVector(out1); cout << "\n";
    cout << "Status:   " << (out1 == exp1 ? "Passed" : "Failed") << "\n\n";

    // Test 2
    vector<ll> in2 = {2, 4, 6, 8};
    ll target2 = 0;
    vector<ll> exp2 = {0, 2, 4, 6, 8};
    vector<ll> out2 = solution.searchInsertAndShift(in2, target2);

    cout << "--- Test 2 ---\n";
    cout << "Input:    "; printVector(in2); cout << " | Target = " << target2 << "\n";
    cout << "Expected: "; printVector(exp2); cout << "\n";
    cout << "Output:   "; printVector(out2); cout << "\n";
    cout << "Status:   " << (out2 == exp2 ? "Passed" : "Failed") << "\n\n";

    return 0;
}