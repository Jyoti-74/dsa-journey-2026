#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int idx, string &s, string current, vector<string> &ans) {
        if (idx == s.size()) {
            ans.push_back(current);
            return;
        }

        solve(idx + 1, s, current + s[idx], ans);
        solve(idx + 1, s, current, ans);
    }

    vector<string> powerSet(string s) {
        vector<string> ans;
        solve(0, s, "", ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {   // ✅ REQUIRED FOR LOCAL RUN
    Solution obj;
    string s = "ab";

    vector<string> res = obj.powerSet(s);
    for (auto &x : res)
        cout << "\"" << x << "\" ";

    return 0;
}
