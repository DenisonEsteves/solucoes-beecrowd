#include <bits/stdc++.h>

using namespace std;

int qtd_premios(const long long num_bilhetes, const int num_a, const int num_b, const int num_c)
{
    auto mmc = [](const int a, const int b)
    {
        return (a * b) / __gcd(a, b);
    };

    return (num_bilhetes / num_a)
         + (num_bilhetes / num_b)
         + (num_bilhetes / num_c)
         - (num_bilhetes / mmc(num_a, num_b))
         - (num_bilhetes / mmc(num_a, num_c))
         - (num_bilhetes / mmc(num_b, num_c))
         + (num_bilhetes / mmc(mmc(num_a, num_b), num_c));
}

int main()
{
    int num_testes;
    cin >> num_testes;

    while(num_testes--)
    {
        long long num_bilhetes; int num_a, num_b, num_c;
        cin >> num_bilhetes >> num_a >> num_b >> num_c;

        cout << qtd_premios(num_bilhetes, num_a, num_b, num_c) << endl;
    }
}