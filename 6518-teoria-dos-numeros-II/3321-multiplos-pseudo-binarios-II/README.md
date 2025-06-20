# Múltiplo Pseudo-Binário II

Por Paulo E. D. Pinto, 🇧🇷 Brazil
Timelimit: 5

Bruno começou a estudar Computação e um dos primeiros tópicos que aprendeu foi o de números binários. Por curiosidade, verificou que alguns inteiros decimais tinham múltiplos que podiam ser escritos apenas usando os dígitos 1 e 0. Ele gostou da brincadeira e ficou tentando achar múltiplos com essa propriedade, que chamou de múltiplos pseudo-binários, sendo sempre bem sucedido. Por exemplo para $N = 7$, o menor múltiplo pseudo-binário é $1001$. Então, Bruno quis saber se essa propriedade valia para todo inteiro. Provou que sim, mas o processo de aritmética modular que ele usou para a prova nem sempre obtinha o menor múltiplo possível.

Ajude Bruno a refinar sua prova, fazendo um programa para que, dado $N$ inteiro, encontre quantos dígitos tem o menor múltiplo pseudo-binário de $N$.

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro $t$ ($1 \le t \le 1000$), que indica o número de casos de teste. Cada teste vem em uma única linha, contendo um inteiro $N$, com $1 \le N \le 10^4$.

## Saída

Para cada caso de teste, escreva a quantidade de dígitos do menor múltiplo pseudo-binário do inteiro dado.

### Samples Input

```
5
1
7
1941
9999
10000
```

### Samples Output

```
1
4
11
36
5
```