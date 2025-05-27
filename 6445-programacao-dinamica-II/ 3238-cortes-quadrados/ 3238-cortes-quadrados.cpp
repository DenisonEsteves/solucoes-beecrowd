#include <bits/stdc++.h>

using namespace std;

int calcular_min_quadrados(int largura, int comprimento)
{
    vector<vector<int>> memo(max(comprimento, largura) + 1, vector<int>(max(comprimento, largura) + 1, -1));

    function<int(int, int)> f = [&](int largura, int comprimento)
    {
        if (memo.at(largura).at(comprimento) != -1)
            return memo.at(largura).at(comprimento);
        if(largura == comprimento)
            return 1;
        if(largura > comprimento)
            return f(comprimento, largura);

        int min_1 = INT_MAX, min_2 = INT_MAX;

        for(int corte = 1; corte <= floor(comprimento/2); corte++)
        {
            int l_min_1 = INT_MAX, l_min_2 = INT_MAX;

            if(memo.at(largura).at(corte) != -1)
                l_min_1 = memo.at(largura).at(corte);
            else
                l_min_1 = f(largura, corte);

            if(memo.at(largura).at(comprimento - corte) != -1)
                l_min_2 = memo.at(largura).at(comprimento - corte);
            else
                l_min_2 = f(largura, comprimento - corte);

            min_1 = min(l_min_1 + l_min_2, min_1);
        }

        for(int corte = 1; corte <= floor(largura/2); corte++)
        {
            int l_min_1 = INT_MAX, l_min_2 = INT_MAX;

            if(memo.at(corte).at(comprimento) != -1)
                l_min_1 = memo.at(corte).at(comprimento);
            else
                l_min_1 = f(corte, comprimento);

            if(memo.at(largura - corte).at(comprimento) != -1)
                l_min_2 = memo.at(largura - corte).at(comprimento);
            else
                l_min_2 = f(largura - corte, comprimento);

            min_2 = min(l_min_1 + l_min_2, min_2);
        }

        return memo.at(largura).at(comprimento) = min(min_1, min_2);
    };

    return f(largura, comprimento);
}

int main()
{
    int testes;
    cin >> testes;
    
    while(testes--)
    {
        int largura, comprimento;
        cin >> largura >> comprimento;
        
        cout << calcular_min_quadrados(largura, comprimento) << endl;
    }
    
    return 0;
}