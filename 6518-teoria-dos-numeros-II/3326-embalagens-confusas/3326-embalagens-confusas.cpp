#include <bits/stdc++.h>

using namespace std;

struct Saco{
    int qtdLaranjas;
    int laranjasRestantes;
};

long long determinarMDCE(long long a, long long b, long long &x, long long &y)
{
    if(b == 0)
    {
        x = 1; y = 0;
        return a;
    }

    long long x1, y1, d;

    d = determinarMDCE(b, a%b, x1, y1);
    x = y1; y = x1 - floor(a/b)*y1;

    return d;
}

int determinarNumeroLaranjasIniciais(Saco saco1, Saco saco2, Saco saco3)
{
    int n, n1, n2, n3; long long x1, x2, x3, dumb;

    n = saco1.qtdLaranjas * saco2.qtdLaranjas * saco3.qtdLaranjas;

    if(saco1.laranjasRestantes == 0 && saco2.laranjasRestantes == 0 && saco3.laranjasRestantes == 0) return n;

    n1 = n / saco1.qtdLaranjas;
    determinarMDCE(n1, saco1.qtdLaranjas, x1, dumb);
    if(x1 < 0 && saco1.qtdLaranjas != 0)
        while(x1 < 0)
            x1 += saco1.qtdLaranjas;

    n2 = n / saco2.qtdLaranjas;
    determinarMDCE(n2, saco2.qtdLaranjas, x2, dumb);
    if(x2 < 0 && saco2.qtdLaranjas != 0)
        while(x2 < 0)
            x2 += saco2.qtdLaranjas;

    n3 = n / saco3.qtdLaranjas;
    determinarMDCE(n3, saco3.qtdLaranjas, x3, dumb);
    if(x3 < 0 && saco3.qtdLaranjas != 0)
        while(x3 < 0)
            x3 += saco3.qtdLaranjas;

    return (saco1.laranjasRestantes * n1 * x1
          + saco2.laranjasRestantes * n2 * x2
          + saco3.laranjasRestantes * n3 * x3)
          % n;
}

int main()
{
    int casosTeste; cin >> casosTeste;

    while(casosTeste--)
    {
        Saco saco1, saco2, saco3;

        cin >> saco1.qtdLaranjas >> saco1.laranjasRestantes
            >> saco2.qtdLaranjas >> saco2.laranjasRestantes
            >> saco3.qtdLaranjas >> saco3.laranjasRestantes;

        cout << determinarNumeroLaranjasIniciais(saco1, saco2, saco3) << endl;
    }

    return 0;
}