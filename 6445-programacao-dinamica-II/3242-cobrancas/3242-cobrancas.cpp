#include <bits/stdc++.h>

using namespace std;

struct ty_cliente
{
    int distancia;
    int valor_devido;
};

struct ty_memo
{
    int menor_indice;
    int valor_maximo;
};

int calcular_valor_max(vector<ty_cliente> &clientes, int num_clientes, int distancia_max)
{
    vector<ty_memo> memo(distancia_max + 1, {-1, 0});
    memo.at(0).menor_indice = memo.at(0).valor_maximo = 0;
    int maior_valor_encontrado = 0;

    for(int i = 1; i <= num_clientes; i++)
        for(int j = distancia_max; j >= clientes.at(i - 1).distancia; j--)
            if(memo.at(j - clientes.at(i - 1).distancia).menor_indice >= 0
            && memo.at(j).valor_maximo < (memo.at(j - clientes.at(i - 1).distancia).valor_maximo + clientes.at(i - 1).valor_devido))
                {
                    memo.at(j).menor_indice = i;
                    memo.at(j).valor_maximo = memo.at(j - clientes.at(i - 1).distancia).valor_maximo + clientes.at(i - 1).valor_devido;
                    maior_valor_encontrado = max(maior_valor_encontrado, memo.at(j).valor_maximo);
                }

    return maior_valor_encontrado;
}

int main()
{
    int testes;
    cin >> testes;

    while(testes--)
    {
        int num_clientes, distancia_max;
        cin >> num_clientes >> distancia_max;

        vector<ty_cliente> clientes (num_clientes);
        for (ty_cliente &cliente : clientes)
        {
            cin >> cliente.distancia; cliente.distancia *= 2;
            cin >> cliente.valor_devido;
        }
        cout << calcular_valor_max(clientes, num_clientes, distancia_max) << endl;
    }

    return 0;
}