#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;

class Solution
{
public:
    // BRUTE FORCE
    int uniquepath(int m, int n) { return countpath(0, 0, m, n); }

    int countpath(int i, int j, int n, int m)
    {
        if (i == (n - 1) && (m - 1))
            return 1;
        if (i >= n || j >= m)
            return 0;
        else
            return countpath(i + 1, j, n, m) + countpath(i, j + 1, n, m);
    }
    // Time: Exponential
    // Space: Exponential (Stack space used)
};

class DPSolution
{
public:
    int uniquepath(int m, int n)
    {
        vector<vi> dp(m + 1, vi(n + 1, -1));

        int num = countpath(0, 0, m, n, dp);
        if (m == 1 && n == 1)
            return num;
        return dp[0][0];
    }

    int countpath(int i, int j, int n, int m, vector<vi> &dp)
    {
        if (i == (n - 1) && (m - 1))
            return 1;
        if (i >= n || j >= m)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        else
            return dp[i][j] = countpath(i + 1, j, n, m, dp) + countpath(i, j + 1, n, m, dp);
    }
};

int main()
{
    Solution ss;
    cout << ss.uniquepath(3, 7);
    // vector<int> vec = {};
    return 0;
}