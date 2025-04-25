# Brincadeiras na Escadaria

Por Fabiano S. Oliveira - Brasil

**Time Limit:** 5

## Descrição

A igreja do bairro fica no alto de um morro, onde os filhos têm acesso através de uma grande escadaria, que vinha do pé do morro e subia até quase a porta da igreja. Para os mais idosos, a escadaria era um motivo de tortura. Para a criançada, uma fonte de brincadeiras.

A mais nova inventada foi a seguinte: colar em cada degrau um número inteiro, que representa a recompensa de pisar naquele degrau. Cada um, em sua vez, sobe a escadaria pulando quantos degraus quiser, mas sem nunca retroceder, necessariamente começando do primeiro degrau e terminando no último. A recompensa de uma dada maneira de subir é dada pela soma dos inteiros associados aos degraus pisados. Aquele que conseguir a maior recompensa sua subida, é o vencedor!

Ajude o Jozinho a ganhar da molecada!

## Entrada

Haverá vários casos de teste. A primeira linha contém um inteiro t (1 ≤ t ≤ 5000), que indica o número de casos de teste. Cada teste vem em duas linhas. A primeira contém dois inteiros 2 ≤ n ≤ 1000, 1 ≤ k ≤ n-1, representando respectivamente o número de degraus da escadaria e o maior número de degraus que Jozinho consegue pular em um só salto. Na segunda linha, há n inteiros x₁, x₂, ..., xₙ, onde, para todo 1 ≤ i ≤ n, -100 ≤ xᵢ ≤ 100 representando o inteiro associado ao i-ésimo degrau.

## Saída

Para cada caso de teste, escreva em uma linha o inteiro que representa a maior recompensa possível se obter em uma subida.

## Exemplos

| Entrada                                                                 | Saída |
|-------------------------------------------------------------------------|-------|
| 4                                                                       |       |
| 3 1                                                                     | 1     |
| 1 -1 2                                                                  |       |
| 15 4                                                                    | 2     |
| 1 -1 -1 1 -1 1 -1 1 -1 1 -1 1 -1 1 1                                    |       |
| 17 4                                                                    | 100   |
| 0 1 -1 -1 -1 100 -1 -1 100 -1 -1 100 -1 -1 -1 0                        |       |
