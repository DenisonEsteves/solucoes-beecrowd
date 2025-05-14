# beecrowd | 3149  
## Recorrência Linear I  
**Por Fabiano S. Oliveira, Brazil**  
**Timelimit: 5**

Por alguma razão obscura, os professores de combinatória adoram recorrências lineares. Uma recorrência linear, de forma geral, descreve uma sequência f(0), f(1), f(2), etc. de forma que, para certo natural k ≥ 1, cada termo f(n) com n≥k pode ser escrito como uma combinação linear de f(n−1),...,f(n−k). Por exemplo, para k=3, o termo f(n) pode ser escrito como

```

f(n) = af(n-1) + bf(n-2) + cf(n-3), se n≥3
f(n) = t_n, se n<3

```

onde t_0, t_1, t_2, a, b, c representam constantes.

Dada uma recorrência no formato acima, e um valor de n, determine o valor f(n). Mas não faça isso à mão, elabore um programa para lhe ajudar!

### Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro t (**1 ≤ t ≤ 5000**), que indica o número de casos de teste. Cada teste vem em três linhas, a primeira contendo um inteiro n, a segunda linha contendo os inteiros a, b, c, e a terceira linha contendo os inteiros t_0, t_1, t_2. Todos os inteiros de entrada não chegam a 2^31.

### Saída

Para cada caso de teste, escreva o valor de f(n). Como tal valor pode ser muito grande, escrevê-lo em módulo **1000000007**.

### Samples Input
```

5
2
1 1 1
0 1 2
3
1 1 1
0 1 2
8
1 1 1
0 1 2
10
1 2 3
1 1 1
9
1 2 3
1 1 1

```

### Samples Output
```

2
3
34
81
34482112

```
