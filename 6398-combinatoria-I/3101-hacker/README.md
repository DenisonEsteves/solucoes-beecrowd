# Hacker

**beecrowd | 3101**  
Por Fabiano S. Oliveira, 🇧🇷 Brazil  
**Timelimit: 5**

Você esqueceu a senha de login no computador e não há como recuperar a senha sem formatar todo o disco. Naturalmente, formatar o disco está fora de questão pelas dezenas de programas lá armazenados como exercícios de AED1, uma vez que não foi feita nenhuma cópia de segurança. A opção então é única: você precisará quebrar a segurança do seu próprio computador, testando todas as possíveis senhas. Mas será que isso vai demorar?

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro t (**1 ≤ t ≤ 5000**), que indica o número de casos de teste. Cada teste vem em uma única linha, contendo dois inteiros k, n, com **1 ≤ k ≤ 30**, **1 ≤ n ≤ 10⁹**.

## Saída

Para cada caso de teste, escreva em uma linha o inteiro que representa a quantidade de senhas de tamanho **n** que podem ser formadas com **k** possíveis caracteres. Como tal quantidade pode ser muito grande, escrevê-la em módulo **1000000007**. Cada um dos **k** caracteres pode ser usado na senha em qualquer quantidade.

### Samples Input

```
6
1 10
10 1
10 2
10 10
10 100
10 1000000000
```

### Samples Output

```
1
10
1024
100
999999937
226732710
142857001
```