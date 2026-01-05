#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> quadraticRoots(int a, int b, int c) {
        vector<int> roots;

        int d = b * b - 4 * a * c;

        if (d < 0) {
            roots.push_back(-1);
            return roots;
        }

        double sqrt_val = sqrt(d);

        int root1 = floor((-b + sqrt_val) / (2.0 * a));
        int root2 = floor((-b - sqrt_val) / (2.0 * a));

        if (root1 >= root2) {
            roots.push_back(root1);
            roots.push_back(root2);
        } else {
            roots.push_back(root2);
            roots.push_back(root1);
        }

        return roots;
    }
};

int main() {
    Solution obj;
    int a = 1, b = -7, c = 10;

    vector<int> res = obj.quadraticRoots(a, b, c);

    for (int x : res)
        cout << x << " ";

    return 0;
}
