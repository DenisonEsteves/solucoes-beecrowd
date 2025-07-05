#include <bits/stdc++.h>

using namespace std;

const int NUM_LETRAS_ALFABETO = 26;
const int SIM = 1, NAO = 0;
const string FALHA = "Mensagem não decifrada.";

string decifrarMensagem(string mensagemCifrada, string parteDecifrada)
{
    int chaveCifragem = 0, chaveEncontrada = NAO;
    auto aplicarDeslocamento = [&](string texto, int numDeslocamento)
    {
        string textoAposDeslocamento;
        for(char c : texto)
            textoAposDeslocamento += ('a' + ((c - 'a' + numDeslocamento) % NUM_LETRAS_ALFABETO));
        return textoAposDeslocamento;
    };

    for(int i = 0; chaveEncontrada != SIM && (i <= mensagemCifrada.size() - parteDecifrada.size()); i += 1)
    {
        string parteAnalisada = mensagemCifrada.substr(i, parteDecifrada.size());

        for(int numDeslocamento = 1; chaveEncontrada != SIM && numDeslocamento <= NUM_LETRAS_ALFABETO; numDeslocamento++)
            if(aplicarDeslocamento(parteAnalisada, numDeslocamento) == parteDecifrada)
            {
                chaveCifragem = numDeslocamento;
                chaveEncontrada = SIM;
            }
    }

    if(chaveEncontrada)
        return aplicarDeslocamento(mensagemCifrada, chaveCifragem);
    else
        return FALHA;
}

int main()
{
    int casosTeste; cin >> casosTeste; cin.ignore();
    
    while(casosTeste--)
    {
        string mensagemCifrada; getline(cin, mensagemCifrada);
        string parteDecifrada; getline(cin, parteDecifrada);
        
        cout << decifrarMensagem(mensagemCifrada, parteDecifrada) << endl;
    }
    
    return 0;
}