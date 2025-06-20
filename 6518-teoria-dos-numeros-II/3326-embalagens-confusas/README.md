# Embalagens Confusas

Por Paulo E. D. Pinto, 🇧🇷 Brazil
Timelimit: 5

Começou a estação de venda de laranjas na quitanda do Joaquim. Ele pediu aos funcionários para embalarem essas laranjas em sacos contendo o mesmo número de laranjas. Inicialmente, os trabalhadores embalaram as laranjas em sacos com 5 laranjas cada, e restaram 2 laranjas. Joaquim achou pouco e pediu para mudarem para 7 laranjas por saco. Ao reempacotar sobraram 3 laranjas. A mulher de Joaquim avisou que havia uma promoção no concorrente e Joaquim decidiu subir para 9 laranjas por saco. Desta vez, os trabalhadores reembalaram as laranjas e não houve nenhuma sobra.

Joaquim esqueceu qual era o total de laranjas e não queria contar o número de sacos preparados! Um dos funcionários sugeriu que seria possível, apenas com as informações sobre o número de laranjas em cada saco e os restos, recuperar o total de laranjas.

Você pode escrever um software que auxilie os trabalhadores neste dia difícil de trabalho?

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro $t$ ($1 \le t \le 1000$), que indica o número de casos de teste. Cada teste vem em uma única linha, contendo 6 inteiros $N1, S1, N2, S2, N3, S3$, $1 \le S_i < N_i \le 1000$, $i=1, 2, 3$, indicando, respectivamente, a primeira quantidade de laranjas por saco, a primeira sobra, e dados análogos para as duas outras embalagens. Garante-se que $\text{MDC}(N_i, N_j) = 1$, para todo par $i, j$.

## Saída

Para cada caso de teste, escreva o número de laranjas iniciais.

### Samples Input

```
4
8 0 17 0 11 0
5 2 7 3 9 0
3 1 5 1 4 1
757 128 740 120 607 53
```

### Samples Output

```
1496
297
1
257089440
```