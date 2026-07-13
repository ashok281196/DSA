#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    bool subsetSum(vector<int> &arr, int sum)
    {
        int n = arr.size();
        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                if (j == 0)
                    dp[i][j] = true;
                else if (i == 0)
                    dp[i][j] = false;
                else if (arr[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        return dp[n][sum];
    }
};

int main()
{
    Solution sol;

    // Test Case 1 - classic case
    vector<int> arr1 = {3, 34, 4, 12, 5, 2};
    int sum1 = 9;
    cout << "Test 1: " << boolalpha << sol.subsetSum(arr1, sum1) << endl;
    cout << "Expected: true (4 + 5 = 9)" << endl
         << endl;

    // Test Case 2 - no subset possible
    vector<int> arr2 = {1, 2, 5};
    int sum2 = 4;
    cout << "Test 2: " << sol.subsetSum(arr2, sum2) << endl;
    cout << "Expected: false" << endl
         << endl;

    // Test Case 3 - sum = 0 (empty subset)
    vector<int> arr3 = {1, 2, 3};
    int sum3 = 0;
    cout << "Test 3: " << sol.subsetSum(arr3, sum3) << endl;
    cout << "Expected: true" << endl
         << endl;

    // Test Case 4 - entire array sums exactly to target
    vector<int> arr4 = {1, 2, 3, 4};
    int sum4 = 10;
    cout << "Test 4: " << sol.subsetSum(arr4, sum4) << endl;

    // Test Case 5 - single element equal to sum
    vector<int> arr5 = {7};
    int sum5 = 7;
    cout << "Test 5: " << sol.subsetSum(arr5, sum5) << endl;
    cout << "Expected: true" << endl
         << endl;

    // Test Case 6 - single element, not equal to sum
    vector<int> arr6 = {7};
    int sum6 = 5;
    cout << "Test 6: " << sol.subsetSum(arr6, sum6) << endl;
    cout << "Expected: false" << endl
         << endl;

    // Test Case 7 - empty array, nonzero sum
    vector<int> arr7 = {};
    int sum7 = 1;
    cout << "Test 7: " << sol.subsetSum(arr7, sum7) << endl;
    cout << "Expected: false" << endl;

    return 0;
}