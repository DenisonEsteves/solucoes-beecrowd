#include <bits/stdc++.h>

using namespace std;

int calcular_tamanho_maior_palindromo(string texto)
{
    int tamanho_texto = texto.size(), maior_palindromo = 1;
    vector<vector<int>> memo(tamanho_texto + 1, vector<int>(tamanho_texto + 1, 0));

    for (int i = 1; i <= tamanho_texto; i++)
    {
        memo.at(i).at(i) = 1;
        if(i != tamanho_texto)
            memo.at(i + 1).at(i) = 1;
    }

    for (int linha = tamanho_texto - 1; linha >= 1; linha--)
        for (int coluna = linha + 1; coluna <= tamanho_texto; coluna++)
            if(texto.at(linha - 1) == texto.at(coluna - 1))
            {
                memo.at(linha).at(coluna) =  memo.at(linha + 1).at(coluna - 1);
                if(memo.at(linha).at(coluna) == 1)
                    maior_palindromo = max(maior_palindromo, coluna - linha + 1);
            }

    return maior_palindromo;
}

int main()
{
    int casos_teste; cin >> casos_teste; cin.ignore();

    while(casos_teste--)
    {
        string texto; getline(cin, texto);
        cout << calcular_tamanho_maior_palindromo(texto) << endl;
    }
    
    return 0;
}