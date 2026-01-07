#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfDigits(int n) {
        if (n == 0)
            return 0;

        return (n % 10) + sumOfDigits(n / 10);
    }
};

int main() {
    Solution sol;

    int n = 1234;
    cout << sol.sumOfDigits(n);

    return 0;
}
