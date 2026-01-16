#include <iostream>
using namespace std;

class Solution {
public:
    bool checkKthBit(int n, int k) {
        return (n & (1 << k)) != 0;
    }
};

int main() {
    Solution obj;
    int n = 5, k = 2;

    if (obj.checkKthBit(n, k))
        cout << "Yes, kth bit is set";
    else
        cout << "No, kth bit is not set";

    return 0;
}
