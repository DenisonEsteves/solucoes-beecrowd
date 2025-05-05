# Ranking

Por Fabiano S. Oliveira, 🇧🇷 Brazil  
Timelimit: 5

No último ano do Ensino Médio, sua turma participou das Olimpíadas de Matemática, organização de âmbito nacional promovida com o intuito de identificar potenciais futuros matemáticos brilhantes. Como resultado, cada escola recebeu o ranking de todos os alunos que participaram da prova, sequenciados da maior para a menor nota. Mas cada escola recebeu o ranking envolvendo apenas os seus alunos. Sendo assim, não se sabe, por exemplo, em que colocação do ranking nacional ficou o primeiro colocado da escola, nem o segundo, e assim por diante.

Você logo imaginou quantos rankings nacionais distintos poderia haver, uma vez que você conhece o ranking da sua escola. Essa questão não saiu da sua cabeça até você escrever um programa para fazer o cálculo.

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro t (1 ≤ t ≤ 5000), que indica o número de casos de teste. Cada teste vem em uma única linha, contendo dois inteiros n,k com 1 ≤ k ≤ n ≤ 10^6.

## Saída

Para cada caso de teste, escreva em uma linha o inteiro que representa a quantidade de rankings nacionais de n alunos compatíveis com o ranking recebido dos k alunos de sua escola. Como tal quantidade pode ser muito grande, escreva-a em módulo 1000000007.

| Samples Input | Samples Output |
|---------------|----------------|
| 5             | 1              |
| 3 3           | 4              |
| 4 3           | 3991680        |
| 12 5          | 1              |
| 1000 1000     | 1000000        |
| 1000000 999999| |
