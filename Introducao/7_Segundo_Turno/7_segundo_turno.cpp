#include <bits/stdc++.h>

using namespace std;

char segundo_turno(int n_votos, vector<int> votos){
  return 'S';
}

int main(){
  int n_casos_teste, n_votos;
  long long voto;
  vector<int> votos;

  cin >> n_casos_teste;
  while(n_casos_teste--){
    cin >> n_votos;
    for(int i = 0; i < n_votos; i++){
      cin >> voto;
      votos.push_back(voto);
    }
    cout << segundo_turno(n_votos, votos) << endl;
  }

  return 0;
}