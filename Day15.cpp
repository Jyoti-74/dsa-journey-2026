#include <iostream>
using namespace std;

class Solution {
public:
    int countSetBits(int n) {
        if (n == 0) return 0;

        // find largest power of 2 <= n
        int x = 0;
        while ((1 << (x + 1)) <= n) {
            x++;
        }

        // bits in numbers from 1 to (2^x - 1)
        int bits_till_2x = x * (1 << (x - 1));

        // MSB set bits from 2^x to n
        int msb_bits = n - (1 << x) + 1;

        // remaining bits
        int rest = countSetBits(n - (1 << x));

        return bits_till_2x + msb_bits + rest;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Total set bits from 1 to " << n << " = "
         << obj.countSetBits(n);

    return 0;
}
