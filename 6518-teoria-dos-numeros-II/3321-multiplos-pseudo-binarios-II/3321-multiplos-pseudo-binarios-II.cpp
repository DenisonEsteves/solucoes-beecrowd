#include <bits/stdc++.h>
using namespace std;

const int NAO_ENCONTRADO = -1;

struct DigitosResto{ string digitos; int resto;};

long long calcularResto(string digitos, int n)
{
    long long m = 0;
    for (int i = 0; i < digitos.size(); i++)
        m = (m * 10 + (digitos[i] - '0')) % n;
    return m;
}

int qtdDigitosMenorMultiploPseudoBinario(int n)
{
    queue<DigitosResto> memo; memo.push({"1", 1 % n}); if (memo.front().resto == 0) return 1;
    vector<bool> visitado(n + 1, false); visitado[memo.front().resto] = true;

    auto explorarNovoDigito = [&](char digito)
    {
        string digitos = memo.front().digitos + digito;
        int resto = calcularResto(digitos, n);

        if (resto == 0)
            return int(digitos.size());
        else if (!visitado[resto])
        {
            visitado[resto] = true;
            memo.push({digitos, resto});
        }

        return NAO_ENCONTRADO;
    };

    while (!memo.empty())
    {
        for (char d : {'0', '1'})
        {
            int qtdDigitos = explorarNovoDigito(d);
            if (qtdDigitos != NAO_ENCONTRADO)
                return qtdDigitos;
        }
        memo.pop();
    }

    return NAO_ENCONTRADO; 
}

int main()
{
    int casosTeste;
    cin >> casosTeste;

    while (casosTeste--)
    {
        int n;
        cin >> n;
        cout << qtdDigitosMenorMultiploPseudoBinario(n) << endl;
    }

    return 0;
}