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
            primos.at(numPrimos) = i;
        }
}

void gerarFatores(int n, vector<long long> primos, int numPrimos, vector<long long> &fatores, int &numFatores)
{
    if(n == 1){fatores.resize(2); fatores.at(1) = 1; numFatores = 1;}

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

void gerarDivisores(long long n, vector<long long> fatores, int numFatores, vector<long long> &divisores, int &numDivisores)
{
    divisores.resize(2);
    fatores.at(0) = numDivisores = divisores.at(1) = 1;

    for(int i = 1, k = 1, numDivisoresAnterior = 0; i <= numFatores; i++)
    {
        if(fatores.at(i) == fatores.at(i - 1))
            k *= fatores.at(i);
        else
        {
            k = fatores.at(i);
            numDivisoresAnterior = numDivisores;
        }
        for(int j = 1; j <= numDivisoresAnterior; j++)
        {
            numDivisores++;
            divisores.resize(numDivisores + 1);
            divisores.at(numDivisores) = k*divisores.at(j);
        }
    }
}

string determinarVencedorJogoMMC(long long n)
{
    int numFatores, numPrimos, numDivisores, numParesMMCn = 0;
    vector<long long> fatores, crivo, primos(ceil(sqrt(n))), divisores;

    gerarCrivo(ceil(sqrt(n)), crivo);
    gerarPrimos(ceil(sqrt(n)), crivo, primos, numPrimos);
    gerarFatores(n, primos, numPrimos, fatores, numFatores);
    gerarDivisores(n, fatores, numFatores, divisores, numDivisores);

    for(int a = 1; a <= numDivisores; a++)
        for(int b = a; b <= numDivisores; b++)
            lcm(divisores.at(a), divisores.at(b)) == n ? ++numParesMMCn : numParesMMCn;

    return (numParesMMCn % 2 == 0) ? "Bruno" : "Joana";
}

int main()
{
    int casosTeste; cin >> casosTeste;
    while(casosTeste--)
    {
        long long n; cin >> n;
        cout << determinarVencedorJogoMMC(n) << endl;
    }
    return 0;
}