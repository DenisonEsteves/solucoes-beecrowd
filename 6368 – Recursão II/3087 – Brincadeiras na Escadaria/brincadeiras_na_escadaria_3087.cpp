#include <bits/stdc++.h>
using namespace std;

int pont(vector<int>& p, int i, int k, vector<int>& MEMO) {
    if (i == p.size() - 1) return p[i];
    if (MEMO[i] != -1) return MEMO[i];

    int max_pont = INT_MIN;
    for (int j = 1; j <= k && i + j < p.size(); j++)
        max_pont = max(max_pont, pont(p, i + j, k, MEMO));

    return MEMO[i] = max_pont + p[i];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> p(n);
        for (int j = 0; j < n; j++)
            cin >> p[j];

        vector<int> MEMO(n, -1);
        cout << pont(p, 0, k, MEMO) << endl;
    }
    return 0;
}