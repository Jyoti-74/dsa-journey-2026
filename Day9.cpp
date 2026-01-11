#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int digitalRoot(int n) {
        if (n < 10)
            return n;

        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return digitalRoot(sum);
    }
};

int main() {
    Solution sol;
    int n = 9875;

    cout << sol.digitalRoot(n) << endl;
    return 0;
}
