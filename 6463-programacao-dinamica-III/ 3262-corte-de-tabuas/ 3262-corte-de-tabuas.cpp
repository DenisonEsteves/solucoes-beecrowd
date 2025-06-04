#include <bits/stdc++.h>

using namespace std;

int calcular_custo_minimo_cortes(int largura_tabua, vector<int> posicoes_cortes, int num_cortes)
{
    vector<vector<int>> memo(num_cortes + 2, vector<int>(num_cortes + 2, -1));
    vector<int> tamanho_tabua(num_cortes + 2, 0);

    tamanho_tabua.at(num_cortes + 1) = largura_tabua;
    for (int i = 0; i < num_cortes; i++)
        tamanho_tabua.at(i + 1) = posicoes_cortes.at(i);

    function<int(int, int)> f = [&](int i, int j)
    {
        if (j == i + 1)
            return 0;

        if (memo.at(i).at(j) != -1)
            return memo.at(i).at(j);

        int custo_minimo = INT_MAX;

        for (int k = i + 1; k < j; k++)
            custo_minimo = min(custo_minimo, f(i, k)
                                             + f(k, j)
                                             + (tamanho_tabua.at(j) - tamanho_tabua.at(i)));

        return memo.at(i).at(j) = custo_minimo;
    };

    return f(0, num_cortes + 1);
}

int main()
{
    int casos_teste;
    cin >> casos_teste;

    while(casos_teste--)
    {
        int largura_tabua, num_cortes;
        cin >> largura_tabua >> num_cortes;

        vector<int> posicoes_cortes(num_cortes, -1);
        for(int& posicao : posicoes_cortes)
            cin >> posicao;

        cout << calcular_custo_minimo_cortes(largura_tabua, posicoes_cortes, num_cortes) << endl;
    }

    return 0;
}