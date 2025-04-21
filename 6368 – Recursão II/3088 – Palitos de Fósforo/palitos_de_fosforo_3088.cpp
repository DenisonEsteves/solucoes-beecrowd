#include <bits/stdc++.h>
using namespace std;

map<pair<int, int>, long long> memo;

int n_palitos[10] = {6,2,5,5,4,5,6,3,7,6};

long long Q(int n, int k, bool primeiro_digito) {
  if (n < 0 || k < 0) return 0;
  if (k == 0) return 1;

  pair<int, int> chave = {n, k};
  if (!primeiro_digito && memo.count(chave)) return memo[chave];

  long long resposta = 0;
  for (int digito = 0; digito <= 9; ++digito) {
    if (primeiro_digito && digito == 0 && k > 1) continue;
    resposta += Q(n - n_palitos[digito], k - 1, false);
  }

  if (!primeiro_digito) memo[chave] = resposta;
  return resposta;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    cout << Q(n, k, true) << endl;
  }
  return 0;
}
