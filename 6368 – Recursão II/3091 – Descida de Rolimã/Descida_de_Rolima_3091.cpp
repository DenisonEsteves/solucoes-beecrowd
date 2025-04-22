#include <bits/stdc++.h>

using namespace std;

int maior_trajeto(vector<vector<int>> patio) {
  int comprimento = patio.size();
  int largura = patio[0].size();

  vector<vector<int>> MEMO(comprimento, vector<int>(largura, -1));

  function<int(int, int)> calcular_trajeto = [&](int i, int j) -> int {
    if (i < 0 || i >= comprimento || j < 0 || j >= largura) return 0;
    if (MEMO[i][j] != -1) return MEMO[i][j];

    int elevacao = patio[i][j];

    return MEMO[i][j] = max(
      max(
          (i + 1 < comprimento && patio[i + 1][j] < elevacao) ? calcular_trajeto(i + 1, j) : 0,
          (i - 1 >= 0 && patio[i - 1][j] < elevacao) ? calcular_trajeto(i - 1, j) : 0
      ),
      max(
          (j + 1 < largura && patio[i][j + 1] < elevacao) ? calcular_trajeto(i, j + 1) : 0,
          (j - 1 >= 0 && patio[i][j - 1] < elevacao) ? calcular_trajeto(i, j - 1) : 0
      )
    ) + 1;
  };

  int valor_maior_trajeto = 0;
  for (int i = 0; i < comprimento; i++) {
    for (int j = 0; j < largura; j++) {
      valor_maior_trajeto = max(valor_maior_trajeto, calcular_trajeto(i, j));
    }
  }

  return valor_maior_trajeto;
}

int main() {
  int n_casos_teste;
  cin >> n_casos_teste;

  while (n_casos_teste--) {
    int comprimento, largura;
    cin >> comprimento >> largura;

    vector<vector<int>> patio(comprimento, vector<int>(largura));
    for (int i = 0; i < comprimento; i++)
      for (int j = 0; j < largura; j++)
        cin >> patio[i][j];

    cout << maior_trajeto(patio) << endl;
  }

  return 0;
}