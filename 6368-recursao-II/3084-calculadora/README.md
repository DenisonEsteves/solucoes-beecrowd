# Calculadora

**beecrowd | 3084**  
Por Fabiano S. Oliveira, :brazil: Brazil  
**Timelimit**: 5 segundos

## Descrição

O irmão mais novo de Joãozinho sempre pede para ele lhe ajudar na conferência de suas soluções de exercícios de matemática. Atualmente, as lições de casa desse irmão são todas relacionadas à determinação de expressões aritméticas.  
Ajude o Joãozinho e seu irmão escrevendo um programa que determine o valor de expressões aritméticas simples.

## Entrada

Haverá vários casos de teste.  
A primeira linha contém um inteiro `t` (`1 ≤ t ≤ 5000`), que indica o número de casos de teste.  
Cada teste vem em uma única linha, contendo uma cadeia de caracteres representando uma expressão aritmética.

Uma expressão aritmética `EXPR` consiste de:

- `(EXPR1)op(EXPR2)`
- ou `n`

Onde:
- `n` é um número inteiro (`-100 ≤ n ≤ 100`),
- `EXPR1` e `EXPR2` são, por sua vez, expressões aritméticas (subexpressões),
- `op` é um dos caracteres: `+`, `-`, `x`, `/`, representando respectivamente soma, subtração, multiplicação e divisão inteira.

Cada expressão aritmética não contém, recursivamente, mais do que **1000** subexpressões.

## Saída

Para cada caso de teste, escreva em uma linha o inteiro que representa o resultado da respectiva expressão aritmética.

**Observações:**
- Assuma que não haverá divisão por 0.
- Os valores de todas as expressões calculadas são no máximo `10⁹`.

## Exemplos

### Entrada

```
4
(1)+(2)
(6)/((1)+(2))
((2)-((6))x(5)+(-2))
(-8)x(((−10))/((-2)+(−3)))/(−4)
```

### Saída

```
3
2
-12
16
```

