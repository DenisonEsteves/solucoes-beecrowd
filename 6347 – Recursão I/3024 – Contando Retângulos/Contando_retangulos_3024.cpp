#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 1001;
const int MAX_M = 1001;
vector<vector<long long>> MEMO(MAX_N, vector<long long>(MAX_M, -1));

long long n_max_retangulos(int n, int m){
  if (MEMO[n][m] != -1) return MEMO[n][m];
  if (n == 0 || m == 0) return 0;
  if (m == 1 && n == 1) return 1;

  return MEMO[n][m] = n_max_retangulos(n - 1, m) + n_max_retangulos(n, m - 1) - n_max_retangulos(n - 1, m - 1) + n*m;
}

int main() {
  int n_casos_teste;

  cin >> n_casos_teste;

  while(n_casos_teste--){
    int n, m;
    cin >> n >> m;
    cout << n_max_retangulos(n, m) << endl;
  }

  return 0;
}