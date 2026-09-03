//
// Created by Junio Moreira on 2026-08-27.
//

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

class Solution {
public:
    static vector<ll> mergeSortedArrays(const vector<ll>& nums1, const vector<ll>& nums2) {

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
    vector<ll> inA1 = {1, 2, 3};
    vector<ll> inB1 = {2, 5, 6};
    vector<ll> exp1 = {1, 2, 2, 3, 5, 6};
    vector<ll> out1 = solution.mergeSortedArrays(inA1, inB1);

    cout << "--- Test 1 ---\n";
    cout << "Input:    A = "; printVector(inA1); cout << " | B = "; printVector(inB1); cout << "\n";
    cout << "Expected: "; printVector(exp1); cout << "\n";
    cout << "Output:   "; printVector(out1); cout << "\n";
    cout << "Status:   " << (out1 == exp1 ? "Passed" : "Failed") << "\n\n";

    // Test 2
    vector<ll> inA2 = {1, 5, 7, 9};
    vector<ll> inB2 = {2, 6};
    vector<ll> exp2 = {1, 2, 5, 6, 7, 9};
    vector<ll> out2 = solution.mergeSortedArrays(inA2, inB2);

    cout << "--- Test 2 ---\n";
    cout << "Input:    A = "; printVector(inA2); cout << " | B = "; printVector(inB2); cout << "\n";
    cout << "Expected: "; printVector(exp2); cout << "\n";
    cout << "Output:   "; printVector(out2); cout << "\n";
    cout << "Status:   " << (out2 == exp2 ? "Passed" : "Failed") << "\n\n";

    return 0;
}