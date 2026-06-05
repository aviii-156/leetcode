class Solution {
public:
    using ll = long long;

    struct Node {
        long long cnt;
        long long wav;
    };

    string s;

    Node memo[20][11][11][2];
    bool vis[20][11][11][2];

    Node dfs(int pos, int prev2, int prev1, int started, int tight) {
        if (pos == (int)s.size()) {
            return {1, 0};
        }

        if (!tight && vis[pos][prev2][prev1][started]) {
            return memo[pos][prev2][prev1][started];
        }

        int limit = tight ? (s[pos] - '0') : 9;

        Node ans{0, 0};

        for (int d = 0; d <= limit; d++) {
            int ntight = tight && (d == limit);

            if (!started && d == 0) {
                Node nxt = dfs(pos + 1, 10, 10, 0, ntight);

                ans.cnt += nxt.cnt;
                ans.wav += nxt.wav;
                continue;
            }

            if (!started) {
                Node nxt = dfs(pos + 1, 10, d, 1, ntight);

                ans.cnt += nxt.cnt;
                ans.wav += nxt.wav;
                continue;
            }

            int add = 0;

            if (prev2 != 10) {
                bool peak =
                    (prev1 > prev2 && prev1 > d);

                bool valley =
                    (prev1 < prev2 && prev1 < d);

                if (peak || valley) add = 1;
            }

            int nprev2 = (prev2 == 10 ? prev1 : prev1);
            int nprev1 = d;

            Node nxt = dfs(pos + 1, nprev2, nprev1, 1, ntight);

            ans.cnt += nxt.cnt;
            ans.wav += nxt.wav + 1LL * add * nxt.cnt;
        }

        if (!tight) {
            vis[pos][prev2][prev1][started] = true;
            memo[pos][prev2][prev1][started] = ans;
        }

        return ans;
    }

    long long solve(long long x) {
        if (x < 0) return 0;

        s = to_string(x);
        memset(vis, 0, sizeof(vis));

        return dfs(0, 10, 10, 0, 1).wav;
    }

    long long totalWaviness(long long num1, long long num2) {
        return solve(num2) - solve(num1 - 1);
    }
};