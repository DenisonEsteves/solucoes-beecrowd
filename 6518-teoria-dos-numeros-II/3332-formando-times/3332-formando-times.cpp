#include <bits/stdc++.h>

using namespace std;

int determinarMDCE(int a, int b, int &x, int &y)
{
    if(b == 0)
    {
        x = 1; y = 0;
        return a;
    }

    int x1, y1, d;

    d = determinarMDCE(b, a%b, x1, y1);
    x = y1; y = x1 - floor(a/b)*y1;

    return d;
}

int determinarNumPossibilidadesFormacaoTimes(int a, int b, int c)
{
    int x0, y0, d = determinarMDCE(a, b, x0, y0);

    if(c % d != 0) return 0;

    int ar = a/d, br = b/d, cr = c/d;

    return floor(cr * (1 -ar * x0) * 1.0 / (ar * br * 1.0))
         - ceil(-cr * x0 * 1.0 / (br * 1.0))
         + 1;
}

int main()
{
    int casosTeste;
    cin >> casosTeste;
    
    while(casosTeste--)
    {
        int numAlunosTime1, numAlunosTime2, totalAlunos;
        cin >> numAlunosTime1 >> numAlunosTime2 >> totalAlunos;
        
        cout << determinarNumPossibilidadesFormacaoTimes(numAlunosTime1, numAlunosTime2, totalAlunos) << endl;
    }
    
    return 0;
}