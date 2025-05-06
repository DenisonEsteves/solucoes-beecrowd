#include <bits/stdc++.h>

using namespace std;
constexpr int N_MOD = 1000000007;

long long qtd_senhas(int qtd_caracteres_dif, int tamanho_senha)
{
    if(tamanho_senha == 0)
        return 1;
    else if(tamanho_senha % 2 != 0)
    {
        long long x = qtd_senhas(qtd_caracteres_dif, (tamanho_senha - 1) / 2);
        return (((x * x) % N_MOD) * qtd_caracteres_dif) % N_MOD;
    }
    else
    {
        long long x = qtd_senhas(qtd_caracteres_dif, tamanho_senha / 2);
        return (x * x) % N_MOD;
    }
}

int main()
{
    int num_testes;
    cin >> num_testes;

    while(num_testes--)
    {
        int tamanho_senha, qtd_caracteres_dif;
        cin >> qtd_caracteres_dif >> tamanho_senha;

        cout << qtd_senhas(qtd_caracteres_dif, tamanho_senha) << endl;
    }

    return 0;
}