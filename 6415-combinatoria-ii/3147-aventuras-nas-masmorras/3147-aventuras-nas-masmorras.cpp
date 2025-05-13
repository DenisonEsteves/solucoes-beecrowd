#include <bits/stdc++.h>
using namespace std;

char verificar_divisao_exata(const string& num_balas, long long num_irmaos)
{
    string balas_invertidas = num_balas;
    reverse(balas_invertidas.begin(), balas_invertidas.end());

    long long base = 1, resto = 0;

    for (char digito_bala : balas_invertidas)
    {
        int digito = digito_bala - '0';
        resto = (resto + (digito * base) % num_irmaos) % num_irmaos;
        base = (base * 10) % num_irmaos;
    }

    return resto == 0 ? 'S' : 'N';
}

int main()
{
    int num_testes;
    cin >> num_testes;

    while (num_testes--)
    {
        string num_balas;
        long long num_irmaos;
        cin >> num_balas >> num_irmaos;

        cout << verificar_divisao_exata(num_balas, num_irmaos) << endl;
    }
}
