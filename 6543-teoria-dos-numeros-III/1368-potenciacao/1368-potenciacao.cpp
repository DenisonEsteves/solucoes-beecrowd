#include <bits/stdc++.h>

using namespace std;

int exponenciacaoModular(string digitosBase, string digitosExpoente, int modulo)
{
    auto exponenciacaoRapida = [](long long base, long long potencia, int mod)
    {
        long long resultado = 1;

        while(potencia > 0)
        {
            if(potencia % 2 == 1)
                resultado = (resultado*base) % mod;
            base = (base * base) % mod;
            potencia = potencia / 2;
        }

        return resultado;
    };

    long long base = 0, resultado = 1;

    for(char digito : digitosBase)
        base = (base * 10 + (digito - '0')) % modulo;

    for(char digito : digitosExpoente)
        resultado = exponenciacaoRapida(resultado, 10, modulo)
                    * exponenciacaoRapida(base, digito - '0', modulo)
                    % modulo;

    return resultado;
}

int main()
{
    int casosTeste; cin >> casosTeste; cin.ignore();

    while(casosTeste--)
    {
        string digitosBase, digitosExpoente; int modulo;

        getline(cin, digitosBase);
        getline(cin, digitosExpoente);
        cin >> modulo; cin.ignore();

        cout << exponenciacaoModular(digitosBase, digitosExpoente, modulo) << endl;
    }

    return 0;
}