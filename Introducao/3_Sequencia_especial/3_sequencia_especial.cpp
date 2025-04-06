#include <bits/stdc++.h>

using namespace std;

vector<long long> comeco = {1, 2};
vector<long long> fim = {1, 3};

void montar_vetores_comeco_fim(long long limite) {
    long long i, j = 2;
    while (fim.back() < limite) {
        i = comeco.size();
        comeco.push_back(fim.back() + 1);

        while ((i + 1) > fim[j - 1]) j++;

        fim.push_back(fim.back() + j);
    }
}

int f(long long k) {
    return lower_bound(fim.begin(), fim.end(), k) - fim.begin() + 1;
}

int main() {
    int n_casos_teste;
    long long k, maior_k = 0;
    
    cin >> n_casos_teste;

    vector<long long> testes(n_casos_teste);
    
    for (int i = 0; i < n_casos_teste; i++) {
        cin >> testes[i];
        maior_k = max(maior_k, testes[i]);
    }
    
    montar_vetores_comeco_fim(maior_k);
    
    for (int i = 0; i < n_casos_teste; i++) {
        cout << f(testes[i]) << "\n";
    }
    
    return 0;
}
