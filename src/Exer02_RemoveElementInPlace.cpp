//
// Created by Junio Moreira on 27/08/26.
// Question 2 - Remove Element In-Place
//

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

#define IOFAST() ios_base::sync_with_stdio(0); cin.tie(0);

// Helper function to print a vector in terminal
void printVector(const vector<ll>& v, int limit = -1) {
    int n = (limit == -1) ? v.size() : limit;
    for (int i = 0; i < n; i++) {
        cout << v[i] << (i + 1 == n ? "" : " ");
    }
    cout << "\n";
}

// 1. PURE LOGIC
// TODO: Remove all occurrences of val in-place preserving relative order and return remaining count K.
int remove_element(vector<ll>& nums, ll val) {
    // Implementation goes here
    return 0;
}

// 2. ONLINE JUDGE ADAPTER
// TODO: Read N and target Val, followed by N elements from standard input (cin), and output K and remaining elements
void onlineJudge() {
    // Implementation goes here
}

// 3. LOCAL TESTS
// TODO: Add local test cases to validate logic before submitting to Online Judge
void runLocalTests() {
    cout << "=== Question 2 (Remove Element In-Place) ===\n\n";

    // Test cases go here
}

int main() {
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}