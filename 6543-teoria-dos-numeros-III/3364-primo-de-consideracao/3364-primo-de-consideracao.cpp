#include <bits/stdc++.h>

using namespace std;

void gerarCrivo(long long n, vector<long long> &crivo)
{
    crivo.resize(n + 1);
    int t = 2;

    for(int i = 1; i <= n; i++) crivo.at(i) = i;
    for(int i = 1; i <= (n/2); i++){ crivo.at(t) = 2; t += 2; }
    for(int i = 3; i <= (ceil(sqrt(n))); i++)
        if(crivo.at(i) == i)
        {
            t = i * i;
            int d = i + i;
            while(t <= n)
            {
                if(crivo.at(t) == t)
                    crivo.at(t) = i;
                t += d;
            }
        }
}

void gerarPrimos(long long n, vector<long long> crivo, vector<long long> &primos, int &numPrimos)
{

    numPrimos = 0;
    for(int i = 2; i <= n; i++)
        if(crivo.at(i) == i)
        {
            numPrimos++;
            primos.at(i) = i;
        }
}

long long exponenciacaoRapida(long long base, long long potencia, int mod)
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
}

vector<int> preProcessarNumerosCarmichael(int p, int q)
{
    int numPrimos; vector<long long> crivo, primos(q + 1); vector<int> numerosCarmichael;

    gerarCrivo(q, crivo);
    gerarPrimos(q, crivo, primos, numPrimos);

    for(int x = max(2, p); x <= q; x++)
    {
        if(primos.at(x)) continue;

        bool carmichael = true;

        for(int a = 2; a <= x && carmichael; a++)
            if(exponenciacaoRapida(a, x, x) != a % x) carmichael = false;

        if(carmichael) numerosCarmichael.push_back(x);
    }
    return numerosCarmichael;
}

int determinarQtdNumerosCarmichael(int p, int q, vector<int> numerosCarmichael)
{
    int qtdNumerosCarmichael = 0;

    for(int n : numerosCarmichael)
        if(n >= p && n <= q) qtdNumerosCarmichael++;

    return qtdNumerosCarmichael;
}

int main()
{
    vector<int> numerosCarmichael = preProcessarNumerosCarmichael(2, 200000);

    int casosTeste;
    cin >> casosTeste;

    while(casosTeste--)
    {
        int p, q; cin >> p >> q;
        cout << determinarQtdNumerosCarmichael(p, q, numerosCarmichael) << endl;
    }
    
    return 0;
}