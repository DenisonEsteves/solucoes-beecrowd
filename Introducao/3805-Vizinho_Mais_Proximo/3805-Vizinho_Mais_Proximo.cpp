#include <bits/stdc++.h>
using namespace std;

vector<int> vizinho_mais_proximo(int n_casas, vector<int> casas) {
   vector<int> vizinhos(n_casas, -1);

   for(int i = 0; i < n_casas - 1; i++) {
     for(int j = i + 1; j < n_casas; j++) {
       if(casas[j] >= casas[i]) {
         vizinhos[i] = casas[j];
         break;
       }
     }
   }

   return vizinhos;
}

int main() {
  int n_casos_teste;
  cin >> n_casos_teste;

  while(n_casos_teste--){
    vector<int> casas, vizinhos;
    int n_casas, casa;

    cin >> n_casas;
    for(int i = 0; i < n_casas; i++){
      cin >> casa;
      casas.push_back(casa);
    }

    vizinhos = vizinho_mais_proximo(n_casas, casas);
    for (int i = 0; i < n_casas; i++) {
      if (i > 0) cout << ' ';
      cout << vizinhos[i];
    }
    cout << endl;
  }
}