#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> possibleWords(vector<int> arr) {
        vector<string> res;
        vector<string> mp = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        string curr;
        backtrack(0, arr, mp, curr, res);
        return res;
    }

private:
    void backtrack(int idx, vector<int>& arr,
                   vector<string>& mp,
                   string &curr, vector<string> &res) {
        if (idx == arr.size()) {
            res.push_back(curr);
            return;
        }

        for (char ch : mp[arr[idx]]) {
            curr.push_back(ch);
            backtrack(idx + 1, arr, mp, curr, res);
            curr.pop_back();
        }
    }
};

int main() {
    Solution obj;
    vector<int> arr = {2, 3};

    vector<string> res = obj.possibleWords(arr);
    for (auto &s : res)
        cout << s << " ";

    return 0;
}
