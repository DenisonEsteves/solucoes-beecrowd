#include <bits/stdc++.h>

using namespace std;

vector<long long> gerarCrivoEratostenes(long long n)
{
    vector<long long> crivo(n + 1);
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
    return crivo;
}

void gerarPrimos(long long n, vector<long long> crivo, vector<long long> &primos, int &numPrimos)
{
    numPrimos = 0;
    for(int i = 2; i <= n; i++)
        if(crivo.at(i) == i)
        {
            numPrimos++;
            primos.at(numPrimos) = i;
        }
}

void fatorar(int n, vector<long long> primos, int numPrimos, vector<long long> &fatores, int &numFatores)
{
    numFatores = 0;
    for(int i = 1; i <= numPrimos; i++)
    {
        while(n % primos.at(i) == 0)
        {
            numFatores++;
            fatores.resize(numFatores + 1);
            fatores.at(numFatores) = primos.at(i);
            n /= primos.at(i);
        }
        if(n == 1 || primos.at(i) >= ceil(sqrt(n)))
            break;
    }
    if(n != 1)
    {
        numFatores++;
        fatores.resize(numFatores + 1);
        fatores.at(numFatores) = n;
    }
}

long long proxNumMesmosFatores(int n)
{
    int numFatores, numPrimos;
    vector<long long> fatores, crivo, primos(ceil(sqrt(n)));

    crivo = gerarCrivoEratostenes(ceil(sqrt(n)));
    gerarPrimos(ceil(sqrt(n)), crivo, primos, numPrimos);
    fatorar(n, primos, numPrimos, fatores, numFatores);
    sort(fatores.begin(), fatores.end());

    return fatores.at(1) * n;
}

int main()
{
    int casosTeste; cin >> casosTeste;

    while(casosTeste--)
    {
        int n; cin >> n;
        cout << proxNumMesmosFatores(n) << endl;
    }

    return 0;
}