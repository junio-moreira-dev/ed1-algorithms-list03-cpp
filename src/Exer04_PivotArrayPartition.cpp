//
// Created by Junio Moreira on 27/08/26.
// Question 4 - Partition Array According to Given Pivot
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
// TODO: Rearrange array elements into (< pivot, == pivot, > pivot) preserving relative order.
vector<ll> pivot_array(const vector<ll>& nums, ll pivot) {
    // Implementation goes here
    return {};
}

// 2. ONLINE JUDGE ADAPTER
// TODO: Read N and pivot P, followed by N elements from standard input (cin), and output partitioned array
void onlineJudge() {
    // Implementation goes here
}

// 3. LOCAL TESTS
// TODO: Add local test cases to validate logic before submitting to Online Judge
void runLocalTests() {
    cout << "=== Question 4 (Partition Array According to Given Pivot) ===\n\n";

    // Test cases go here
}

int main() {
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}