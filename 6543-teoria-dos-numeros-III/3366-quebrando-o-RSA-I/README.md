# Quebrando o RSA I

**beecrowd | 3366**  
Por Fabiano S. Oliveira, 🇧🇷 Brazil  
**Timelimit: 5**

Luciano quer descobrir o conteúdo de certas mensagens destinadas à sua namorada Márcia, enviada por um amigo dela. Mas Márcia, para manter sua privacidade, combinou com seu amigo que usassem o RSA para cifrar as mensagens enviadas. O amigo, usando a chave pública de Márcia, enviou todas as mensagens cifradas no protocolo. Porém, o que Márcia não contava era que Luciano fez o curso de Desenvolvimento e Implementação de Algoritmos, e se deu mal. Luciano apostou que Márcia não empregou primos muito grandes e usou os métodos de fatoração dados no curso para quebrar a segurança dessas mensagens ocultas.

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro t (**1 ≤ t ≤ 5000**), que indica o número de casos de teste. Cada teste vem em duas linhas, a primeira contendo dois inteiros **1 ≤ e, n ≤ 10⁸** consistindo da chave pública de Márcia, e a segunda linha da mensagem cifrada por seu amigo usando tal chave pública.

## Saída

Para cada caso de teste, escreva a mensagem descriptografada. (Pobre, Márcia!)

### Samples Input
```
1
7309 83137843
49032261
```

### Samples Output
```
1234567
```
