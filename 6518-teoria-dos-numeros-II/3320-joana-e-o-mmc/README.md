# Joana e o MMC

Por Paulo E. D. Pinto, 🇧🇷 Brazil
Timelimit: 15

Joana e Bruno estavam brincando de um jogo diferente. Primeiro, escolhiam um número N. Em seguida, cada um, alternadamente, deveria enunciar um par de números cujo MMC resultava em N. Aquele que não conseguisse em sua vez enunciar um novo par perdia! É claro que esse par de números é formado por divisores de N.

Por exemplo, em uma das partidas, Joana escolheu o número N=4. O jogo prosseguiu assim:

**Joana: 4, 4**

**Bruno: 1, 4**

**Joana: 2, 4**

**Bruno: hmm... não sei de outro par! Ganhou, Joana!**

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro $t$ ($1 \le t \le 5000$), que indica o número de casos de teste. Cada teste vem em uma única linha, contendo um inteiro $N$, com $1 \le N \le 10^9$.

## Saída

Para cada caso de teste, escreva o nome de quem ganhará a partida (Joana ou Bruno). Para tanto, assuma que Joana vai sempre começar e ambos jogarão da melhor maneira possível.

### Samples Input

```
4
1
12
1800
1000000000
```

### Samples Output

```
Joana
Bruno
Joana
Bruno
```