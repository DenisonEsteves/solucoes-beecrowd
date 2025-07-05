# beecrowd | 3364  
## Primo de Consideração  
**Por Fabiano S. Oliveira, 🇧🇷 Brazil**  
**Timelimit: 15**

Daniel descobriu que Michael, com quem ele brincou a infância toda e o apresentava como primo, era na verdade filho de um velho conhecido da família. De tão próximos, ele achava que era um primo, mas que agora pensando um pouco melhor nas relações da família, descobriu que não havia de fato tal grau de parentesco.

Quando Daniel conheceu os números de Carmichael ele achou engraçada a coincidência com essa confusão que ele fez na infância: além da similaridade dos nomes, um número de Carmichael é um primo também apenas aparente. Um número de Carmichael é qualquer natural composto x ≥ 2 tal que a^x ≡ a (mod x) para qualquer natural a. O Pequeno Teorema de Fermat afirma que, quando x é primo, a relação anterior é sempre satisfeita.

### Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro t (1 ≤ t ≤ 5000), que indica o número de casos de teste. Cada teste em uma única linha, consistindo de dois inteiros 1 ≤ p, q ≤ 200000.

### Saída

Para cada caso de teste, escreva quantos números de Carmichael há entre p e q (extremos inclusive).

### Samples Input
```
7
1 560
1 561
562 1105
1106 1729
1730 2465
1 8911
1 200000
```

### Samples Output
```
0
1
1
1
1
7
22
```
