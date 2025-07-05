# Lendo o diário de Julieta

Por Fabiano S. Oliveira, 🇧🇷 Brazil
Timelimit: 5

Toninho achou o diário de Julieta. Mas o que ele não contava é que Julieta escreveu de maneira cifrada, empregando a cifra de César. Nessa cifra, cada letra é trocada por uma outra a um certo número de posições à frente na ordem alfabética. Tal número de posições é chamado de chave da cifragem. Por exemplo, se a mensagem decifrada é "abc" e a chave é 5, então a mensagem cifrada é "fgh". Considera-se que a ordem alfabética é circular, isto é, após a letra 'z' vem a letra 'a'. Ajude o Toninho a descobrir os segredos de Julieta!

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro $t$ ($1 \le t \le 5000$), que indica o número de casos de teste. Cada teste vem em duas linhas. Na primeira linha, contém a mensagem cifrada de uma página do diário de Julieta. Na segunda linha, contém uma parte da mensagem decifrada que Toninho descobriu estar naquela página. Ambas as mensagens têm tamanho máximo de 10000 caracteres.

## Saída

Para cada caso de teste, escreva a mensagem decifrada.

### Samples Input

```
3
cbcd
babc
azab
abc
xqegpcgfgxkcguvctngpfguguucogpugicowodcdteqfghcdkcpq
umabraco
```

### Samples Output

```
babc
babc
vocenaodeviaestarlendoessamensagemumabracodefabiano
```