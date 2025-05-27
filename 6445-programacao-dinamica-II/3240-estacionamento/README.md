# Estacionamento

Por Paulo E. D. Pinto, 🇧🇷 Brazil
**Timelimit:** 5

Vai ter uma grande festa e foi pedido aos convidados que informassem o comprimento dos carros que usariam, para que pudessem planejar o estacionamento de todos. A área de estacionamento tem 2 linhas de mesmo comprimento ao longo das quais os carros podem ficar parados.

Conhecendo todos os dados mencionados, ajude os organizadores a saber de antemão se todos os convidados podem estacionar ou não.

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro $t$ ($1 \le t \le 1000$), que indica o número de casos de teste. Cada teste é descrito em várias linhas. A primeira contém os inteiros $c$ ($1 \le c \le 50$), o número de carros, $l$ ($1 \le l \le 500$), o comprimento de cada uma das duas linhas de estacionamento. A seguir vêm uma linha com $c$ inteiros, representando os comprimentos dos carros. Esse valor é positivo e, no máximo, 20.

## Saída

Para cada caso de teste, escreva `S` se for possível acomodar todos os carros no estacionamento, ou `N`, caso contrário.

### Samples Input

```
2
5 6
2 2 2 2 2
5 5
2 2 2 2 2
```

### Samples Output

```
S
N
```