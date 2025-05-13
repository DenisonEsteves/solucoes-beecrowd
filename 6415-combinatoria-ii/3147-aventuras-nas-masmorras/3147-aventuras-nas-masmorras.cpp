#include <bits/stdc++.h>

using namespace std;
constexpr int MAX = 101;
vector<vector<int>> MEMO(MAX, vector<int>(MAX, -1));
const unsigned long long MOD = pow(2, 63);

unsigned long long num_divisoes(int num_itens, int num_aventureiros)
{
    if(MEMO.at(num_itens).at(num_aventureiros) != -1)
        return MEMO.at(num_itens).at(num_aventureiros);
    else if(num_aventureiros == 1 || num_itens == num_aventureiros)
        return 1;
    else
        return (num_divisoes(num_itens - 1, num_aventureiros) * num_aventureiros ) % MOD
              + num_divisoes(num_itens - 1, num_aventureiros - 1);
}

int main()
{
    int num_testes;
    cin >> num_testes;

    while(num_testes--)
    {
        int num_itens, num_aventureiros;
        cin >> num_itens >> num_aventureiros;

        cout << num_divisoes(num_itens, num_aventureiros) << endl;
    }
}