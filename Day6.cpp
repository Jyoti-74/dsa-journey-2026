#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigits(int n) {
        if (n == 0)
            return 1;
        return 1 + countDigits(n / 10);
    }
};

int main() {
    Solution sol;
    int n = 12345;
    cout << sol.countDigits(n) << endl;
    return 0;
}
