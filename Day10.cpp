#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int josephus(int n, int k) {
        if (n == 1)
            return 1;

        return (josephus(n - 1, k) + k - 1) % n + 1;
    }
};

int main() {
    Solution obj;
    int n = 7, k = 3;

    cout << obj.josephus(n, k) << endl;
    return 0;
}
