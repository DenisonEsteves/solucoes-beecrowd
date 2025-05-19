#include <bits/stdc++.h>

using namespace std;

int calcular_tempo_minimo(int limite, vector<int> tempos)
{
    if (limite == 1)
        return accumulate(tempos.begin(), tempos.end(), 0);

    int n = tempos.size();
    vector<int> memo(n, 0);
    memo[0] = tempos[0];

    for (int i = 1; i < n; i++)
    {
        vector<int> opcoes;
        for (int inicio = max(0, i - limite + 1); inicio <= i; inicio++)
        {
            int max_tempo = *max_element(tempos.begin() + inicio, tempos.begin() + i + 1);
            int total = max_tempo + (inicio < 1 ? 0 : memo[inicio - 1]);
            opcoes.push_back(total);
        }
        memo[i] = *min_element(opcoes.begin(), opcoes.end());
    }

    return memo[n - 1];
}

int main()
{
    int testes;
    cin >> testes;

    while (testes--)
    {
        int total, limite;
        cin >> total >> limite;

        vector<int> tempos(total, 0);
        for (int &tempo : tempos)
            cin >> tempo;

        cout << calcular_tempo_minimo(limite, tempos) << endl;
    }

    return 0;
}