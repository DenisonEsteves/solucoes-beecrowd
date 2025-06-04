# Corte de Tábuas
## Descrição do Problema
Você precisa cortar uma tábua em vários pedaços. A empresa que corta cobra cada corte pelo tamanho da tábua. Eles fazem um corte por vez. Dá para ver que diferentes seleções da ordem de corte podem levar a custos diferentes. Por exemplo, considere uma tábua de 10 metros que deve ser cortada nos pontos, 2, 4 e 7 metros. Se o primeiro corte for na posição 2, depois na 4 e depois na 7, o preço dos cortes será 10+8+7 = 24. Se a escolha for cortar no ponto 4, depois no 2 e depois no 7, o custo será 10+4+6 = 20, o que é melhor. Você deve encontrar o custo mínimo para os cortes.
## Entrada
Haverá vários casos de teste. A primeira linha contém um inteiro `t` ($1 \le t \le 100$), que indica o número de casos de teste. Cada teste é descrito em duas linhas. A primeira contém dois inteiros `l` ($1 \le l \le 1000$), a largura da tábua e `n` ($1 \le n \le 50$), o número de cortes. Na linha seguinte vêm `n` inteiros, que indicam as posições dos cortes. Esses valores estão ordenados.
## Saída
Para cada caso de teste, escreva o custo mínimo dos cortes.
## Exemplos
### Samples Input
```
2
100 3
25 50 75
10 4
4 5 7 8
```
### Samples Output
```
200
22
```