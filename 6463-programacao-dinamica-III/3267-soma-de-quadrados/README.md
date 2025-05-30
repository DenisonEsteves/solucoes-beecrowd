# Soma de Quadrados

**Por Paulo E. D. Pinto, Brazil**

**Timelimit: 5**

---

Um famoso teorema da Teoria dos Números, que foi discutido por vários matemáticos e primeiramente demonstrado por Lagrange é que todo número inteiro pode ser escrito como a soma de quatro quadrados de inteiros menores. Nesse enunciado fica implícito que, para alguns inteiros uma ou mais dessas quatro parcelas é o número zero. Neste problema, trabalharemos com a idéia de que todo inteiro pode ser escrito com ATÉ quatro quadrados de inteiros menores. Dado um inteiro **n**, você deve calcular qual o número mínimo de inteiros menores cuja soma de seus quadrados é **n**. Por exemplo, para **n** = 25 = 16 + 9 = 4<sup>2</sup> + 3<sup>2</sup>, esse mínimo é 2.

---

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro **t** (1 ≤ **t** ≤ 5000), que indica o número de casos de teste. Cada teste consiste de um inteiro **n** (1 ≤ **n** ≤ 10000), em uma linha.

---

## Saída

Para cada caso de teste, escreva o número mínimo de inteiros cuja soma de seus quadrados seja igual a **n**.

---

## Samples

### Samples Input
```
5
5
50
500
5000
9999
```

### Samples Output
```
2
2
2
2
2
4
```