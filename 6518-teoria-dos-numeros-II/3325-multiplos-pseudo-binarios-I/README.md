# Múltiplos PseudoBinários I

Por Paulo E. D. Pinto, 🇧🇷 Brazil
Timelimit: 5

Bruno começou a estudar Computação e um dos primeiros tópicos que aprendeu foi o de números binários. Por curiosidade, verificou que alguns inteiros decimais tinham múltiplos maiores que zero, que podiam ser escritos apenas usando os dígitos 1 e 0. Ele gostou da brincadeira e ficou tentando achar múltiplos com essa propriedade, que chamou de múltiplos pseudobinários, sendo sempre bem sucedido. Bruno conseguiu provar que para todo inteiro N existe um múltiplo pseudo-binário. Sua prova considera os N primeiros números formados com apenas o dígito 1, ou seja 1, 11, 111, ... 11...1, o primeiro com 1 dígito, o segundo com 2 e assim sucessivamente. Se algum desses números for divisível por N, o problema está resolvido. Se não, então existem pelo menos dois números A e B dessa classe (A < B), que têm o mesmo resto da divisão por N. Então (B-A) divide N.

Faça um programa para exemplificar a prova de Bruno para qualquer N dado.

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro $t$ ($1 \le t \le 1000$), que indica o número de casos de teste. Cada teste vem em uma única linha, contendo um inteiro $N$, com $1 \le N \le 10^4$.

## Saída

Para cada caso de teste, escreva $C = B-A$, o múltiplo pseudo-binário da prova de Bruno, onde A e B são números decimais escritos apenas com o dígito 1 e, B é o menor número que tem o mesmo resto da divisão por N que outro número A menor.

### Samples Input

```
5
1
7
24
99
1000
```

### Samples Output

```
1
111111
111000
111111111111111111111111
1000
```