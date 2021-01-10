class Solution {
public:
    int c[100001];
    int createSortedArray(vector<int>& instructions) {
        memset(c, 0, sizeof(c));
        int res = 0, n = instructions.size(), mod = 1e9 + 7;
        for (int i = 0; i < n; ++i) {
            res = (res + min(get(instructions[i] - 1), i - get(instructions[i]))) % mod;
            update(instructions[i]);
        }
        return res;
    }

    void update(int x) {
        while (x < 100001) {
            c[x]++;
            x += x & -x;
        }
    }

    int get(int x) {
        int res = 0;
        while (x > 0) {
            res += c[x];
            x -= x & -x;
        }
        return res;
    }
};
