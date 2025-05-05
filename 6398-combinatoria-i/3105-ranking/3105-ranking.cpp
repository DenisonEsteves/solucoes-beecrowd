#include <bits/stdc++.h>

using namespace std;
constexpr int MODULO = 1000000007;

long long calcular_rankings(const int total_alunos, const int alunos_escola)
{
    if (total_alunos == alunos_escola)
        return 1;

    long long acumulador = total_alunos;
    for (int i = total_alunos - 1; i > alunos_escola; i--)
        acumulador = (acumulador * i) % MODULO;

    return acumulador;
}

int main()
{
    int num_testes;
    cin >> num_testes;

    while (num_testes--)
    {
        int total_alunos, alunos_escola;
        cin >> total_alunos >> alunos_escola;

        cout << calcular_rankings(total_alunos, alunos_escola) << endl;
    }

    return 0;
}