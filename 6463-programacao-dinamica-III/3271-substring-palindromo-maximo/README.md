# Substring Palindromo Maximo
**Por Paulo E. D. Pinto, 🇧🇷 Brazil**

**Timelimit: 5**

Dado um string de letras maiúsculas, alguns de seus substrings são palíndromos. Substrings são sempre "pedaços" do string dado, eventualmente todo ele é um palíndromo. Palíndromos são strings que, lidos da direita para a esquerda, formam o mesmo substring lido da esquerda para a direita. Por exemplo, o string "SUBINOONIBUS" é um palíndromo. Cada caracter do string dado deve ser considerado um palíndromo de tamanho 1. Neste problema sua tarefa é determinar o tamanho do maior substring do string dado que seja um palíndromo.

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro **t** (1 ≤ **t** ≤ 1000), que indica o número de casos de teste. Cada teste consiste de um string escrito em uma linha. Esse string tem comprimento máximo de **1000** caracteres.

## Saída

Para cada caso de teste, escreva o tamanho do maior substring do string dado que seja um palíndromo.

---

| Samples Input                 | Samples Output |
| :---------------------------- | :------------- |
| 4                             |                |
| MADAME                        | 5              |
| SUBINOONIBUS                  | 12             |
| SOCORRAMMESUBINOONIBUS        | 12             |
| SOCORRAMMESUBINOONIBUSEMMARROCOS | 32                |