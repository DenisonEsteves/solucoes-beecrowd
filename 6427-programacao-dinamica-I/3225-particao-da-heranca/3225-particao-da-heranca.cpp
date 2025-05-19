#include <bits/stdc++.h>

using namespace std;

long long calcular_particoes(int heranca, int instituicoes, int valor_minimo)
{
    vector<vector<long long>> MEMO(instituicoes, vector<long long>(heranca, -1));

    function<long long(int, int)> T = [&](int p, int n)
    {
        if((p >= 1 && n >= 1) && MEMO[p-1][n-1] != -1)
            return MEMO[p-1][n-1];
        if(n < 0 || (n > 0 && p == 0))
            return 0ll;
        if(n == 0)
            return 1ll;
        return MEMO[p-1][n-1] = T(p, n - p) + T(p - 1, n);
    };

    return T(instituicoes, heranca - instituicoes * valor_minimo);
}

int main()
{
    int testes;
    cin >> testes;

    while (testes--)
    {
        int heranca, instituicoes, valor_minimo;
        cin >> heranca >> instituicoes >> valor_minimo;

        cout << calcular_particoes(heranca, instituicoes, valor_minimo) << endl;
    }

    return 0;
}