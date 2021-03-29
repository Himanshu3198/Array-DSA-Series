// https://leetcode.com/problems/maximum-swap/
class Solution {
public:
    int maximumSwap(int num) {
         string s = to_string(num);
        string n = s;
        sort(s.begin(), s.end(), greater<int>());
        for (int i = 0; i < n.size(); i++) {
            if (n[i] != s[i]) {
                int j = n.size() - 1;
                for (; j > i; j--) if (n[j] == s[i]) {
                    break;
                }
                swap(n[i], n[j]);
                break;
            }
        }
        return stoi(n);
    }
};
