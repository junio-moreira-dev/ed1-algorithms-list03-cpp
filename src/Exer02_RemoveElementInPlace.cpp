//
// Created by Junio Moreira on 2026-08-27.
//

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

class Solution {
public:
    static int removeElement(vector<ll>& nums, ll val) {

        return {};
    }
};

void printVector(const vector<ll>& v, int limit = -1) {
    int n = (limit == -1) ? v.size() : limit;
    cout << "[";
    for (int i = 0; i < n; ++i) {
        cout << v[i] << (i + 1 < n ? ", " : "");
    }
    cout << "]";
}

int main() {
    Solution solution;

    // Test 1
    vector<ll> in1 = {3, 2, 2, 3};
    ll val1 = 3;
    int expK1 = 2;
    vector<ll> expVec1 = {2, 2};

    cout << "--- Test 1 ---\n";
    cout << "Input:    "; printVector(in1); cout << " | Val = " << val1 << "\n";
    int outK1 = solution.removeElement(in1, val1);
    cout << "Expected: K = " << expK1 << " | "; printVector(expVec1); cout << "\n";
    cout << "Output:   K = " << outK1 << " | "; printVector(in1, outK1); cout << "\n";
    vector<ll> outVec1(in1.begin(), in1.begin() + outK1);
    cout << "Status:   " << (outK1 == expK1 && outVec1 == expVec1 ? "Passed" : "Failed") << "\n\n";

    // Test 2
    vector<ll> in2 = {0, 1, 2, 2, 3, 0, 4, 2};
    ll val2 = 2;
    int expK2 = 5;
    vector<ll> expVec2 = {0, 1, 3, 0, 4};

    cout << "--- Test 2 ---\n";
    cout << "Input:    "; printVector(in2); cout << " | Val = " << val2 << "\n";
    int outK2 = solution.removeElement(in2, val2);
    cout << "Expected: K = " << expK2 << " | "; printVector(expVec2); cout << "\n";
    cout << "Output:   K = " << outK2 << " | "; printVector(in2, outK2); cout << "\n";
    vector<ll> outVec2(in2.begin(), in2.begin() + outK2);
    cout << "Status:   " << (outK2 == expK2 && outVec2 == expVec2 ? "Passed" : "Failed") << "\n\n";

    return 0;
}