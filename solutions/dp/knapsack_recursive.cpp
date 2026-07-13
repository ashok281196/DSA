#include <bits/stdc++.h>
using namespace std;

class Solution {
   private:
    vector<vector<int>> dp;

    int solve(int W, vector<int>& wt, vector<int>& val, int n) {
        if (n == 0 || W == 0)
            return 0;

        if (dp[n][W] != -1)
            return dp[n][W];

        if (wt[n - 1] <= W) {
            return dp[n][W] = max(val[n - 1] + solve(W - wt[n - 1], wt, val, n - 1),
                                  solve(W, wt, val, n - 1));

        } else {
            return dp[n][W] = solve(W, wt, val, n - 1);
        }
    }

   public:
    int knapsack(int W, vector<int>& wt, vector<int>& val, int n) {
        dp.assign(n + 1, vector<int>(W + 1, -1));
        return solve(W, wt, val, n);
    }
};

int main() {
    // Test Case 1
    vector<int> wt1 = {1, 3, 4, 5};
    vector<int> val1 = {1, 4, 5, 7};
    int W1 = 7;
    int n1 = wt1.size();

    Solution sol;
    cout << "Test 1: " << sol.knapsack(W1, wt1, val1, n1) << endl;
    cout << "Expected: 9" << endl << endl;

    // Test Case 2
    vector<int> wt2 = {2, 3, 4, 5};
    vector<int> val2 = {3, 4, 5, 6};
    int W2 = 5;
    int n2 = wt2.size();

    cout << "Test 2: " << sol.knapsack(W2, wt2, val2, n2) << endl;
    cout << "Expected: 7" << endl << endl;

    // Test Case 3 - edge case: capacity 0
    vector<int> wt3 = {1, 2, 3};
    vector<int> val3 = {10, 15, 40};
    int W3 = 0;
    int n3 = wt3.size();

    cout << "Test 3: " << sol.knapsack(W3, wt3, val3, n3) << endl;
    cout << "Expected: 0" << endl;

    // Test Case 4 - larger input (10 items)
    vector<int> wt4 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> val4 = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int W4 = 25;
    cout << "Test 4: " << sol.knapsack(W4, wt4, val4, wt4.size()) << endl;
    cout << "Expected: 250" << endl << endl;
    // (picking items to exactly fill capacity 25, all val/wt ratio same = 10, so any full-capacity
    // combo gives 250)

    // Test Case 5 - single item, fits exactly
    vector<int> wt5 = {5};
    vector<int> val5 = {50};
    int W5 = 5;
    cout << "Test 5: " << sol.knapsack(W5, wt5, val5, wt5.size()) << endl;
    cout << "Expected: 50" << endl << endl;

    // Test Case 6 - single item, doesn't fit
    vector<int> wt6 = {10};
    vector<int> val6 = {100};
    int W6 = 5;
    cout << "Test 6: " << sol.knapsack(W6, wt6, val6, wt6.size()) << endl;
    cout << "Expected: 0" << endl << endl;

    // Test Case 7 - all items too heavy individually
    vector<int> wt7 = {10, 20, 30};
    vector<int> val7 = {60, 100, 120};
    int W7 = 5;
    cout << "Test 7: " << sol.knapsack(W7, wt7, val7, wt7.size()) << endl;
    cout << "Expected: 0" << endl << endl;

    // Test Case 8 - n = 0 (no items at all)
    vector<int> wt8 = {};
    vector<int> val8 = {};
    int W8 = 10;
    cout << "Test 8: " << sol.knapsack(W8, wt8, val8, wt8.size()) << endl;
    cout << "Expected: 0" << endl << endl;

    // Test Case 9 - can only take all items exactly (W == sum of all weights)
    vector<int> wt9 = {2, 3, 4};
    vector<int> val9 = {3, 4, 5};
    int W9 = 9;
    cout << "Test 9: " << sol.knapsack(W9, wt9, val9, wt9.size()) << endl;
    cout << "Expected: 12" << endl << endl;

    // Test Case 10 - classic textbook case, good for hand-tracing
    vector<int> wt10 = {1, 3, 4, 5};
    vector<int> val10 = {1, 4, 5, 7};
    int W10 = 7;
    cout << "Test 10: " << sol.knapsack(W10, wt10, val10, wt10.size()) << endl;
    cout << "Expected: 9" << endl;

    return 0;
}