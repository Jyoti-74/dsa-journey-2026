#include <iostream>
using namespace std;

class Solution {
public:
    int getFirstSetBit(int n) {
        if (n == 0) return 0;

        int pos = 1;
        while ((n & 1) == 0) {
            n >>= 1;
            pos++;
        }
        return pos;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "First set bit position: "
         << obj.getFirstSetBit(n);

    return 0;
}
