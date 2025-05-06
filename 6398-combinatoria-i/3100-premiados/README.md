# Premiados

**beecrowd | 3100**  
**Por Fabiano S. Oliveira, 🇧🇷 Brazil**  
**Timelimit: 1**

O gerente do cinema Múltiplos Cine, preocupado com a taxa de desocupação das cadeiras, resolveu bolar a seguinte promoção: ao fim de cada sessão, após os créditos de exibição do filme, aparecerão no telão 3 inteiros: **a, b, c**. Os espectadores cujo número do bilhete de entrada for um múltiplo de **a**, **b** ou **c**, devem passar na bilheteria para receber um prêmio especial!

Mas como todo bom e velho gerente, ele quer saber o quanto custará aos cofres do cinema tal promoção. Você, é claro, ficou encarregado de escrever um programa para ajudar o gerente a calcular isso.

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro **t** (1 ≤ **t** ≤ 5000), que indica o número de casos de teste. Cada teste vem em uma única linha, contendo quatro inteiros **n, a, b, c**, com 0 ≤ **n** < 2³¹, 0 ≤ **a**, **b**, **c** < 2¹⁰.

## Saída

Para cada caso de teste, escreva em uma linha o inteiro que representa a quantidade de prêmios que será oferecida se os inteiros premiados forem os múltiplos de **a**, **b**, **c** e os bilhetes vendidos forem de 1 até **n**.

---

### Samples Input
```

5
22 2 3 5
22 2 3 5
30 2 3 5
30 2 3 5
1073741824 11 29 101

```

### Samples Output
```

16
21
22
15
140603892

```
