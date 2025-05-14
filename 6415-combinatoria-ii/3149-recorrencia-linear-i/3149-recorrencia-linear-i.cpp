#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

long long calc(int n, int a, int b, int c, int t0, int t1, int t2) {
    if (n == 0) return t0;
    if (n == 1) return t1;
    if (n == 2) return t2;

    vector<vector<long long>> base = {{a, b, c}, {1, 0, 0}, {0, 1, 0}};
    vector<vector<long long>> t = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int exp = n - 2;

    while (exp > 0) {
        if (exp % 2) {
            vector<vector<long long>> tmp(3, vector<long long>(3, 0));
            for (int i = 0; i < 3; ++i)
                for (int j = 0; j < 3; ++j)
                    for (int k = 0; k < 3; ++k)
                        tmp[i][j] = (tmp[i][j] + t[i][k] * base[k][j]) % MOD;
            t = tmp;
        }

        vector<vector<long long>> tmp(3, vector<long long>(3, 0));
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                for (int k = 0; k < 3; ++k)
                    tmp[i][j] = (tmp[i][j] + base[i][k] * base[k][j]) % MOD;
        base = tmp;

        exp /= 2;
    }

    return (t[0][0] * t2 % MOD + t[0][1] * t1 % MOD + t[0][2] * t0 % MOD) % MOD;
}

int main() {
    int num_testes;
    cin >> num_testes;

    while (num_testes--) {
        int n, a, b, c, t0, t1, t2;
        cin >> n >> a >> b >> c >> t0 >> t1 >> t2;
        cout << calc(n, a, b, c, t0, t1, t2) << endl;
    }

    return 0;
}