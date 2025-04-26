#include <bits/stdc++.h>
using namespace std;

long long calcular_expressao(const string& expressao, int& posicao_atual) {
    auto avaliar_sub_expressao = [&]() -> long long {
        string numero = "";
        while (posicao_atual < expressao.size()) {
            if (expressao.at(posicao_atual) == '(') {
                posicao_atual++;
                if (expressao.at(posicao_atual) == '(') {
                    const long long resultado_sub_expressao = calcular_expressao(expressao, posicao_atual);
                    posicao_atual++;
                    return resultado_sub_expressao;
                }
            } else if (isdigit(expressao.at(posicao_atual)) || expressao.at(posicao_atual) == '-') {
                while (isdigit(expressao.at(posicao_atual)) || expressao.at(posicao_atual) == '-') {
                    numero += expressao.at(posicao_atual);
                    posicao_atual++;
                }
            } else if (expressao.at(posicao_atual) == ')') {
                posicao_atual++;
                return stoll(numero);
            }
        }
        return 0;
    };

    const long long operando_1 = avaliar_sub_expressao();
    const char operador = expressao.at(posicao_atual++);
    const long long operando_2 = avaliar_sub_expressao();

    switch (operador) {
        case '+': return operando_1 + operando_2;
        case '-': return operando_1 - operando_2;
        case 'x': return operando_1 * operando_2;
        case '/': return operando_1 / operando_2;
        default: throw invalid_argument("Operador inválido");
    }
    return 0;
}

int main() {
    int quantidade_testes;
    cin >> quantidade_testes;

    while (quantidade_testes--) {
        string expressao;
        cin >> expressao;

        int posicao_atual = 0;
        cout << calcular_expressao(expressao, posicao_atual) << endl;
    }
    return 0;
}