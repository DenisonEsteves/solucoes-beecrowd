#include <bits/stdc++.h>

using namespace std;

vector<int> memo(10000, -1);

int calcular_minimo_quadrados(int n)
{
    if(n == 0) return 0;
    int valor_minimo = INT_MAX;
    for(int i = 1; i <= sqrt(n + 0.5); i++)
    {
        if(memo.at(n - i*i) == -1)
           memo.at(n - i*i) = calcular_minimo_quadrados(n - i*i);
        valor_minimo = min(memo.at(n - i*i), valor_minimo);
    }
    return memo.at(n) = valor_minimo + 1;
}

int main()
{
    int num_testes; cin >> num_testes;
    while(num_testes--)
    {
        int n; cin >> n;
        cout << calcular_minimo_quadrados(n) << endl;
    }
    return 0;
}