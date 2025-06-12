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

bool ehPrimo(long long n, vector<long long> primos, int numPrimos)
{
    for(int i = 1; i <= numPrimos; i++)
        if(n % primos.at(i) == 0)
        {
            if(n != primos.at(i))
                return false;
            return true;
        }
    return true;
}

char ehNumeroComposto(long long n)
{
    int numGeracaoPrimos = ceil(sqrt(n)), numPrimos;
    vector<long long> primos(numGeracaoPrimos);

    vector<long long> crivo = gerarCrivoEratostenes(numGeracaoPrimos);
    gerarPrimos(numGeracaoPrimos, crivo, primos, numPrimos);

    return ehPrimo(n, primos, numPrimos) ? 'N' : 'S';
}

int main()
{
    int casosTeste; cin >> casosTeste;

    while(casosTeste--)
    {
        long long n; cin >> n;
        cout << ehNumeroComposto(n) << endl;
    }

    return 0;
}