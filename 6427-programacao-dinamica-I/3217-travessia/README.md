# Travessia

Por Paulo E. D. Pinto, 🇧🇷 Brazil  
**Timelimit:** 10

As recentes chuvas prejudicaram uma estrada de muito movimento e uma ponte ficou com a estrutura abalada. Então apenas um certo número de carros podem estar sobre essa ponte simultaneamente. Foi colocado um guarda na entrada da ponte para controlar a travessia, de forma a permitir que somente k carros atravessem de cada vez.

O tempo de travessia de um conjunto de carros é aquele do carro que leva mais tempo no percurso. O guarda controla uma fila de carros, cujos tempos de travessia são conhecidos e a travessia tem que obedecer a ordem dos carros na fila. Você deve ajudar o guarda, determinando a forma de travessia de toda a fila de carros, para minimizar o tempo total.

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro t (**1 ≤ t ≤ 1000**), que indica o número de casos de teste. Cada teste vem em duas linhas. A primeira contém dois números n (**1 ≤ n ≤ 10⁶**), o número de carros na fila e k (**1 ≤ k ≤ 100**), o número de carros que podem atravessar simultaneamente a ponte. Na segunda linha vêm n inteiros, contendo o tempo de travessia dos n carros da fila. Cada tempo é um inteiro menor ou igual a 1000.

## Saída

Para cada teste você deve imprimir o tempo mínimo de travessia.

## Samples Input
```

5
8 1
5 3 1 4 6 2 8 7
8 2
5 3 1 4 6 2 8 7
8 3
5 3 1 4 6 2 8 7
8 4
5 3 1 4 6 2 8 7
8 8
5 3 1 4 6 2 8 7

```

## Samples Output
```

36
20
22
18
15

```
