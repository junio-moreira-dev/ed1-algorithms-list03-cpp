//
// Created by Junio Moreira on 2026-08-27.
//

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

class Solution {
public:
    vector<ll> pivotArray(const vector<ll>& nums, ll pivot) {
        vector<ll> less;
        vector<ll> equal;
        vector<ll> greater;

        for (ll x : nums) {
            if (x < pivot) {
                less.push_back(x);
            } else if (x == pivot) {
                equal.push_back(x);
            } else {
                greater.push_back(x);
            }
        }

        vector<ll> result;
        result.reserve(nums.size());
        result.insert(result.end(), less.begin(), less.end());
        result.insert(result.end(), equal.begin(), equal.end());
        result.insert(result.end(), greater.begin(), greater.end());

        return result;
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
    vector<ll> in1 = {9, 12, 5, 10, 14, 3, 10, 2};
    ll pivot1 = 10;
    vector<ll> exp1 = {9, 5, 3, 2, 10, 10, 12, 14};
    vector<ll> out1 = solution.pivotArray(in1, pivot1);

    cout << "--- Test 1 ---\n";
    cout << "Input:    "; printVector(in1); cout << " | Pivot = " << pivot1 << "\n";
    cout << "Expected: "; printVector(exp1); cout << "\n";
    cout << "Output:   "; printVector(out1); cout << "\n";
    cout << "Status:   " << (out1 == exp1 ? "Passed" : "Failed") << "\n\n";

    // Test 2
    vector<ll> in2 = {-3, 4, 3, 2, 2};
    ll pivot2 = 2;
    vector<ll> exp2 = {-3, 2, 2, 4, 3};
    vector<ll> out2 = solution.pivotArray(in2, pivot2);

    cout << "--- Test 2 ---\n";
    cout << "Input:    "; printVector(in2); cout << " | Pivot = " << pivot2 << "\n";
    cout << "Expected: "; printVector(exp2); cout << "\n";
    cout << "Output:   "; printVector(out2); cout << "\n";
    cout << "Status:   " << (out2 == exp2 ? "Passed" : "Failed") << "\n\n";

    return 0;
}