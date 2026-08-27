//
// Created by Junio Moreira on 27/08/26.
// Question 1 - Sorted Array Insert and Shift
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
// TODO: Insert target into sorted vector maintaining ascending order by performing a right shift.
vector<ll> search_insert_and_shift(const vector<ll>& nums, ll target) {
    // Implementation goes here
    return {};
}

// 2. ONLINE JUDGE ADAPTER
// TODO: Read N and target X, followed by N elements from standard input (cin), and output shifted array
void onlineJudge() {
    // Implementation goes here
}

// 3. LOCAL TESTS
// TODO: Add local test cases to validate logic before submitting to Online Judge
void runLocalTests() {
    cout << "=== Question 1 (Sorted Array Insert and Shift) ===\n\n";

    // Test cases go here
}

int main() {
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}