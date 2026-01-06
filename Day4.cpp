#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printNos(int n) {
        if (n == 0) return;
        printNos(n - 1);
        cout << n << " ";
    }
};

int main() {
    Solution obj;
    int n = 5;        // you can change this value
    obj.printNos(n);
    return 0;
}
