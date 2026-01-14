#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isLucky(int n, int i = 2) {
        if (i > n)
            return true;

        if (n % i == 0)
            return false;

        return isLucky(n - n / i, i + 1);
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number: ";
    cin >> n;

    if (sol.isLucky(n))
        cout << "Lucky Number\n";
    else
        cout << "Not a Lucky Number\n";

    return 0;
}
