# Aventuras nas Masmorras

Por Fabiano S. Oliveira, 🇧🇷 Brazil  
**Timelimit: 5**

Se existe uma coisa que um grupo de aventureiros medievais adoravam fazer é explorar masmorras antigas em busca de tesouros perdidos. Quando encontravam um espólio, tratavam de dividir entre eles os itens encontrados. Mas como cada item tinha um valor único, tais aventureiros se preocupavam em verificar todas as formas de dividir os `n` itens encontrados para os `p` aventureiros, de modo que cada aventureiro recebesse ao menos um item. Dentre todas as formas de proceder tal divisão, aquela que o grupo considerasse mais justa, era a escolhida.

Os aventureiros começaram a desconfiar que talvez não estivessem contando todas as possibilidades de divisão. Ajude-os a conferir as contas, elaborando um programa para efetuar tal contagem.

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro `t` (**1 ≤ t ≤ 5000**), que indica o número de casos de teste. Cada teste vem em uma única linha, contendo um inteiro `n`, com **1 ≤ n ≤ 100**, representando o número de itens do tesouro encontrado, seguido de um inteiro `p`, com **1 ≤ p ≤ n**, representando o número de aventureiros.

## Saída

Para cada caso de teste, escreva o número possível de divisões de `n` itens para os `p` aventureiros, de modo que cada um receba ao menos um item. Assuma que tal quantidade nunca chegará a 2^63.

## Samples Input

```

7
3 1
3 2
3 3
4 3
5 3
10 5
32 5

```

## Samples Output

```

1
3
1
6
25
42525
8789635722715766990

```