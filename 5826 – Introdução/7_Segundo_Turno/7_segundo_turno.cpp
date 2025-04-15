#include <bits/stdc++.h>

using namespace std;
const char TEM_SEGUNDO_TURNO = 'S';
const char NAO_TEM_SEGUNDO_TURNO = 'N';

char checar_segundo_turno(int n_votos, vector<int> votos){
  int n_maioria_votos = n_votos / 2 + 1;
  vector<int> candidatos = votos;

  sort(candidatos.begin(), candidatos.end());
  candidatos.erase(unique(candidatos.begin(), candidatos.end()), candidatos.end());

  for (int candidato : candidatos){
    int n_votos_candidato = count(votos.begin(), votos.end(), candidato);
    if (n_votos_candidato >= n_maioria_votos) return NAO_TEM_SEGUNDO_TURNO;
  }

  return TEM_SEGUNDO_TURNO;
}

int main(){
  int n_casos_teste, n_votos, voto;
  cin >> n_casos_teste;

  while(n_casos_teste--){
    vector<int> votos;
    cin >> n_votos;

    for(int i = 0; i < n_votos; i++){
      cin >> voto;
      votos.push_back(voto);
    }

    cout << checar_segundo_turno(n_votos, votos) << endl;
  }

  return 0;
}