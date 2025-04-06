#include <bits/stdc++.h>

using namespace std;

string rotacao_X(const string &cubo) {
    string cubo_retorno = cubo;
    cubo_retorno[0] = cubo[1];
    cubo_retorno[1] = cubo[5];
    cubo_retorno[5] = cubo[4];
    cubo_retorno[4] = cubo[0];
    cubo_retorno[2] = cubo[2];
    cubo_retorno[3] = cubo[3];
    return cubo_retorno;
}

string rotacao_Y(const string &cubo) {
    string cubo_retorno = cubo;
    cubo_retorno[1] = cubo[2];
    cubo_retorno[3] = cubo[1];
    cubo_retorno[4] = cubo[3];
    cubo_retorno[2] = cubo[4];
    cubo_retorno[0] = cubo[0];
    cubo_retorno[5] = cubo[5];
    return cubo_retorno;
}

string rotacao_Z(const string &cubo) {
    string cubo_retorno = cubo;
    cubo_retorno[0] = cubo[2];
    cubo_retorno[2] = cubo[5];
    cubo_retorno[5] = cubo[3];
    cubo_retorno[3] = cubo[0];
    cubo_retorno[1] = cubo[1];
    cubo_retorno[4] = cubo[4];
    return cubo_retorno;
}

char checar_isomorfismo(const string &original, const string &target) {
    for (int x = 0; x < 4; x++) {
        string cubo_x = original;
        for (int i = 0; i < x; i++) {
            cubo_x = rotacao_X(cubo_x);
        }
        for (int y = 0; y < 4; y++) {
            string cubo_xy = cubo_x;
            for (int i = 0; i < y; i++) {
                cubo_xy = rotacao_Y(cubo_xy);
            }
            for (int z = 0; z < 4; z++) {
                string cubo_xyz = cubo_xy;
                for (int i = 0; i < z; i++) {
                    cubo_xyz = rotacao_Z(cubo_xyz);
                }
                if (cubo_xyz == target)
                    return 'S';
            }
        }
    }
    return 'N';
}

int main() {
    int t; string cubo_1, cubo_2;
    cin >> t;
    while (t--) {
        cin >> cubo_1 >> cubo_2;
        cout << checar_isomorfismo(cubo_1, cubo_2) << "\n";
    }
    return 0;
}