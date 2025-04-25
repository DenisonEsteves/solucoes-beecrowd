#include <bits/stdc++.h>
using namespace std;

int soma_pares(int tamanho_vetor, int soma_dada, int vetor[]){
    int inicio = 0, fim = tamanho_vetor - 1, soma, qtd_pares_soma = 0;
    while(inicio < fim){
        soma = vetor[inicio] + vetor[fim];
        if(soma < soma_dada) inicio ++;
        else if(soma > soma_dada) fim--;
        else { qtd_pares_soma++; fim--; inicio++;}
    }
    return qtd_pares_soma;
}

void carrega_vetor(int tamanho_vetor, int vetor[]){
    for(int i = 0; i < tamanho_vetor; i++){
        cin >> vetor[i];
    }
}

int main(){
    int qtd_casos_de_teste, tamanho_vetor, soma_dada;
    cin >> qtd_casos_de_teste;
    for(int i = 0; i < qtd_casos_de_teste; i++){
        cin >> tamanho_vetor >> soma_dada;
        int vetor[tamanho_vetor];
        carrega_vetor(tamanho_vetor, vetor);
        cout << soma_pares(tamanho_vetor, soma_dada, vetor) << endl;
    }
    return 0;
}