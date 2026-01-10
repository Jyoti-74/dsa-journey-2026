#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long towerOfHanoi(int n, int from, int to, int aux) {
        if (n == 0) return 0;

        long long left  = towerOfHanoi(n - 1, from, aux, to);
        long long right = towerOfHanoi(n - 1, aux, to, from);

        return left + 1 + right;
    }
};

int main() {
    Solution sol;
    int n = 3;

    cout << sol.towerOfHanoi(n, 1, 3, 2) << endl;
    return 0;
}
