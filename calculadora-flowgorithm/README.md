# Calculadora Flowgorithm

**Título da atividade:** Calculadora Flowgorithm  
**Nome do aluno(a):** Patrícia Liane  
**Objetivo do programa:** Este projeto tem finalidade acadêmica, visando a prática de lógica de programação e o desenvolvimento de um algoritmo estruturado que implementa uma calculadora com múltiplas funcionalidades, utilizando a ferramenta Flowgorithm.

---

## Descrição resumida do funcionamento

O programa apresenta um menu com 20 opções numeradas. O usuário digita o número correspondente à operação desejada e, em seguida, fornece os valores necessários para o cálculo. Cada opção executa uma operação matemática, geométrica, de conversão ou de saúde, exibindo o resultado na tela. O fluxo é controlado por estruturas condicionais aninhadas (`if` / `else`), característica do ambiente Flowgorithm.

---

## Relação das 20 funções implementadas

| Opção | Funcionalidade                          | Descrição                                                                 |
|-------|-----------------------------------------|---------------------------------------------------------------------------|
| 1     | Soma                                    | Soma dois números reais.                                                  |
| 2     | Subtração                               | Subtrai o segundo número do primeiro.                                     |
| 3     | Multiplicação                           | Multiplica dois números reais.                                            |
| 4     | Divisão                                 | Divide o primeiro número pelo segundo (real).                             |
| 5     | Divisão inteira                         | Retorna a parte inteira da divisão entre dois números.                    |
| 6     | Módulo (resto)                          | Retorna o resto da divisão entre dois inteiros.                           |
| 7     | Exponenciação                           | Eleva o primeiro número à potência do segundo.                            |
| 8     | Raiz quadrada                           | Calcula a raiz quadrada de um número.                                    |
| 9     | Área do retângulo                       | Base × Altura.                                                           |
| 10    | Área do triângulo                       | (Base × Altura) / 2.                                                     |
| 11    | Área do quadrado                        | Lado².                                                                   |
| 12    | Área do losango                         | (Diagonal maior × Diagonal menor) / 2.                                   |
| 13    | Perímetro do círculo                    | 2 × π × raio (π ≈ 3,14156).                                              |
| 14    | Perímetro do quadrado                   | 4 × lado.                                                                |
| 15    | Conversão Kelvin → Celsius              | Temperatura em Kelvin subtraída de 273.                                  |
| 16    | Conversão Fahrenheit → Celsius          | (F − 32) × 5/9.                                                          |
| 17    | Conversão m/s → km/h                    | Velocidade em m/s multiplicada por 3,6.                                  |
| 18    | Consumo médio de combustível            | Distância percorrida dividida pelos litros gastos.                       |
| 19    | Cálculo do IMC (Índice de Massa Corporal)| Peso / (Altura²).                                                       |
| 20    | Logaritmo natural                       | Logaritmo natural.                                                       |

---

## Instruções básicas para execução

1. **Abra o arquivo** no software **Flowgorithm** (versão compatível com a 4.2 ou superior).
2. **Execute** o programa clicando no botão de execução ou pressionando `F5`.
3. No console, será exibido o menu com todas as opções disponíveis.
4. **Digite o número** da operação desejada (de 1 a 20) e pressione `Enter`.
5. Siga as instruções na tela para inserir os valores solicitados.
6. O resultado será mostrado imediatamente após o cálculo.
7. Para realizar nova operação, basta repetir o processo (o programa não possui loop, então será necessário executar novamente para múltiplos cálculos).

---

## Funções obrigatórias destacadas

- **Cálculo do IMC (Opção 19)**  
  Implementado conforme a fórmula `IMC = peso / (altura²)`. O usuário informa o peso e a altura, e o programa exibe o valor do IMC.

- **Cálculo de área (Opções 9, 10, 11, 12)**  
  O programa contempla quatro fórmulas geométricas de área:
  - Retângulo (base × altura)
  - Triângulo (base × altura / 2)
  - Quadrado (lado²)
  - Losango (diagonal maior × diagonal menor / 2)
