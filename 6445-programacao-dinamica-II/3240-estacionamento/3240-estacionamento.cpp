#include <bits/stdc++.h>

using namespace std;

char checar_acomodamento_carros(vector<int> carros, int num_carros, int comprimento_linhas)
{
    vector<vector<int>> memo = vector<vector<int>>(num_carros + 1, vector<int>(comprimento_linhas + 1, -1));

    memo.at(0).at(0) = 0;
    for(int i = 1; i <= num_carros; i++)
        for(int r = i ; r >= 1; r--)
            for(int j = carros.at(i - 1); j <= comprimento_linhas; j++)
                if(memo.at(r).at(j) == -1 && (memo.at(r-1).at(j - carros.at(i - 1)) >= 0))
                    memo.at(r).at(j) = i;

    int maior_soma = 0;
    int total_carros = accumulate(carros.begin(), carros.end(), 0);

    for (int i = 1; i <= num_carros; i++) 
        for (int j = 1; j <= comprimento_linhas; j++) 
            if (memo.at(i).at(j) != -1 && j > maior_soma)
                maior_soma = j;
    
    return (total_carros - maior_soma) <= comprimento_linhas ? 'S' : 'N';
}

int main()
{
    int testes;
    cin >> testes;

    while(testes--)
    {
        int num_carros, comprimento_linhas;
        cin >> num_carros >> comprimento_linhas;

        vector<int> carros(num_carros, 0);
        for(int &comprimento : carros)
            cin >> comprimento;

        cout << checar_acomodamento_carros(carros, num_carros, comprimento_linhas) << endl;
    }

    return 0;
}