//
// Created by Junio Moreira on 27/08/26.
// Question 3 - Merge Two Sorted Arrays
//

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

#define IOFAST() ios_base::sync_with_stdio(0); cin.tie(0);

// Helper function to print a vector in terminal
void printVector(const vector<ll>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << (i + 1 == v.size() ? "" : " ");
    }
    cout << "\n";
}

// 1. PURE LOGIC
// TODO: Merge two sorted arrays A and B into a single sorted array without re-sorting.
vector<ll> merge_sorted_arrays(const vector<ll>& nums1, const vector<ll>& nums2) {
    // Implementation goes here
    return {};
}

// 2. ONLINE JUDGE ADAPTER
// TODO: Read size N and array A, size M and array B from standard input (cin), and output merged array
void onlineJudge() {
    // Implementation goes here
}

// 3. LOCAL TESTS
// TODO: Add local test cases to validate logic before submitting to Online Judge
void runLocalTests() {
    cout << "=== Question 3 (Merge Two Sorted Arrays) ===\n\n";

    // Test cases go here
}

int main() {
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}