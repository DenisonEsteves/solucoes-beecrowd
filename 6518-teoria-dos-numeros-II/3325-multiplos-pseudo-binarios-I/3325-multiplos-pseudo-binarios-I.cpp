#include <bits/stdc++.h>

using namespace std;

struct PseudoBinaria{
    int qtdDigitos;
    int resto;
};

long long calcularRestoComEsquemaHorner(string digitos, int n)
{
    long long m = 0;
    for(int i = digitos.size(); i > 0; i--)
        m = (m * 10 + (digitos[i - 1] - '0')) % n;
    return m;
}

string calcularMultiploPseudoBinario(int n)
{
    vector<PseudoBinaria> memo(n + 1);
    for(int i = 1; i <= n; i++)
    {
        memo[i].qtdDigitos = i;
        memo[i].resto = calcularRestoComEsquemaHorner(string(memo[i].qtdDigitos, '1'), n);

        if(memo[i].resto == 0)
            return string(memo[i].qtdDigitos, '1');

        for(int j = 1; j < i; j++)
            if(memo[j].resto == memo[i].resto)
                return string(memo[i].qtdDigitos - memo[j].qtdDigitos, '1') + string(memo[j].qtdDigitos, '0');
    }
}

int main()
{
    int casosTeste;
    cin >> casosTeste;
    
    while(casosTeste--)
    {
        int n; cin >> n;
        cout << calcularMultiploPseudoBinario(n) << endl;
    }
    
    return 0;
}