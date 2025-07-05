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

int gerarTotiente(int n)
{
    int numFatores, numPrimos;
    vector<long long> fatores, crivo, primos(ceil(sqrt(n)));

    gerarCrivo(ceil(sqrt(n)), crivo);
    gerarPrimos(ceil(sqrt(n)), crivo, primos, numPrimos);
    gerarFatores(n, primos, numPrimos, fatores, numFatores);


    struct BaseExp{int base; int exp;}; BaseExp fator;
    vector<BaseExp> fatoresComExp;
    set<int> setFatores;
    int t = 1;

    for(int f : fatores) setFatores.insert(f);
    for(int f : setFatores)
    {
        fator.base = f;
        fator.exp = count(fatores.begin(), fatores.end(), f);
        fatoresComExp.push_back(fator);
    }

    for(int i = 1; i < fatoresComExp.size(); i++)
    {
        fator = fatoresComExp.at(i);
        t *= pow(fator.base, fator.exp) - pow(fator.base, fator.exp - 1);
    }
    return t;
}

int gerarMDCE(int a, int b, int &x, int &y)
{
    if(b == 0)
    {
        x = 1; y = 0;
        return a;
    }

    int x1, y1, d;

    d = gerarMDCE(b, a%b, x1, y1);
    x = y1; y = x1 - floor(a/b)*y1;

    return d;
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

int quebrarRSA(int e, int n, int msg)
{
    int t, d, aux;

    t = gerarTotiente(n);
    gerarMDCE(e, t, d, aux);
    if(d < 0) d = t + d;

    return exponenciacaoRapida(msg, d, n);
}

int main()
{
    int casosTeste;
    cin >> casosTeste;
    
    while(casosTeste--)
    {
        int e, n, msg; cin >> e >> n >> msg;
        cout << quebrarRSA(e, n, msg) << endl;
    }
    
    return 0;
}