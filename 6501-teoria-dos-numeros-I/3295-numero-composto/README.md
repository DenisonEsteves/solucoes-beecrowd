# Número Composto

**Por Fabiano S. Oliveira, 🇧🇷 Brazil**

**Timelimit: 15**

Um número $x$ é composto se existem naturais $a,b > 1$ tais que $ab = x$. Por exemplo, $21$ é composto pois $3 \cdot 7 = 21$.

### Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro $t$ ($1 \le t \le 5000$), que indica o número de casos de teste. Cada teste vem em uma única linha, contendo um inteiro $n$, com $1 \le n \le 10^{15}$.

### Saída

Para cada caso de teste, escreva `S` se $n$ é um número composto, ou `N` caso contrário.

| Samples Input | Samples Output |
|---|---|
| 7 | N |
| 21 | S |
| 41 | N |
| 93719 | S |
| 93721 | N |
| 4257452468389 | S |
| 4257452468391 | S |
| 94257452468391 | S |