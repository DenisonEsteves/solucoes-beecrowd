# Formando Times

Por Paulo E. D. Pinto, 🇧🇷 Brazil
Timelimit: 5

O professor de Educação Física quer formar times com a participação de todos os alunos da turma, que tem 50 alunos. Ele pensou em dar a opção da escolha de dois esportes, o Quadribol, com 4 participantes em cada time e o Corfebol, com 6 participantes. Ele percebeu que poderia formar 5 times de cada esporte, alocando todos os 50 alunos. Entretanto, um dos alunos, Bruno, mostrou para ele que havia outras possibilidades de formação, com 2, 8, 11 times de Quadribol e 7, 3, 1 times de Corfebol, respectivamente.

O professor gostou tanto da observação do Bruno que pediu para ele fazer um programa para generalizar a solução para outros tipos de esporte e número de alunos. Ajude Bruno.

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro $t$ ($1 \le t \le 1000$), que indica o número de casos de teste. Cada teste vem em uma única linha, contendo três inteiros $a, b, c$, ($1 \le a, b \le 300$) e ($1 \le c \le 10^4$).

## Saída

Para cada caso de teste, escreva o número de possibilidades de formação de times.

### Samples Input

```
6
4 6 50
4 6 51
4 6 500
4 6 5000
300 300 10000
300 300 9000
```

### Samples Output

```
4
0
417
0
31
```