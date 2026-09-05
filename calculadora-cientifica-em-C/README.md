# Calculadora em C

## Descrição do projeto
Calculadora interativa com 20 operações matemáticas, desenvolvida em C para fins acadêmicos. O programa exibe um menu numerado, lê a opção e os números necessários, executa o cálculo e exibe o resultado, permitindo repetir ou encerrar a interação.

## Objetivo da calculadora
Oferecer uma ferramenta prática para cálculos variados e, principalmente, consolidar o aprendizado de C (manipulação de entrada/saída, estruturas de controle, repetição e uso da biblioteca matemática <math.h>).

## Funcionalidades implementadas (20 operações)
1. Soma  
2. Subtração  
3. Multiplicação  
4. Divisão (com verificação de divisão por zero)  
5. Resto da divisão 
6. Potenciação 
7. Raiz quadrada (valida número não negativo)  
8. Porcentagem  
9. Log natural (exige número > 0)  
10. Log na base 10 (exige número > 0)  
11. Média aritmética  
12. Média ponderada (pesos 2 e 3)  
13. Elevar ao quadrado  
14. Elevar ao cubo  
15. Hipotenusa
16. Raiz cúbica 
17. Fatorial (valida inteiro não negativo)  
18. Seno (rad)  
19. Cosseno (rad)  
20. Tangente (rad)

## Bibliotecas utilizadas
- `stdio.h` – entrada e saída (printf/scanf).  
- `math.h` – funções matemáticas (pow, sqrt, log, hypot, cbrt, sin, cos, tan, fmod).  

## Organização do código
O fluxo está concentrado na função **main**:
- Loop **do-while** para repetição controlada pelo usuário.
- Leitura de um ou dois números conforme a operação.
- Bloco **switch** com 20 casos para executar o cálculo e tratar erros (divisão por zero, raiz negativa, log de número ≤ 0, fatorial inválido)
- Usa **"sucesso"** para exibir ou não o resultado.
- Ao final, pergunta se deseja continuar (digitar 1).

## Conceitos de programação aplicados
- **Estruturas condicionais**: _if_ para validar opção e números, _if/else_ nos casos de erro e _switch_ para selecionar a operação.
- **Estruturas de repetição**: _do-while_ para manter o programa em execução; _continue_ para reiniciar quando a opção é inválida.
- **Entrada e saída de dados**: _printf_ para exibir menus, mensagens e resultados; _scanf_ para capturar opção e números (_%i_ para int, _%f_ para float).
- **Biblioteca _math.h_**: essencial para operações como potência, raízes, logaritmos, trigonometria e hipotenusa, ampliando as capacidades da calculadora.

## Instruções para compilação e execução

### Pré-requisitos
- Compilador C (recomenda-se GCC).
- Sistema operacional com suporte a terminal/console.

### Compilação
Salve o código em um arquivo, por exemplo, `calculadora.c`. No terminal, navegue até o diretório do arquivo e execute:

```bash
gcc -o calculadora calculadora.c -lm
```

### Execução
Após a compilação, execute o programa com:

```bash
./calculadora
```

No Windows (se estiver usando MinGW, o executável será `calculadora.exe`), basta digitar:

```bash
calculadora.exe
```

## Exemplos de uso

### Exemplo 1: Soma

```
        ======== MENU ========
        (1)  Soma               (11) Media Aritmetica
        (2)  Subtracao          (12) Media Ponderada (pesos 2 e 3)
        ...
Digite a opcao desejada (1 - 20) >>>	1

Digite um numero >>> 15.5
Digite outro numero >>> 2.5

 O resultado eh 18.00

 Digite 1 para continuar >>> 0
```

### Exemplo 2: Raiz quadrada (com erro)

```
Digite a opcao desejada (1 - 20) >>>	7

Digite um numero >>> -9

Erro: Raiz de numero negativo!

 Digite 1 para continuar >>> 1
```

O programa não exibe resultado e volta ao menu.

### Exemplo 3: Fatorial

```
Digite a opcao desejada (1 - 20) >>>	17

Digite um numero >>> 5

 O resultado eh 120.00

 Digite 1 para continuar >>> 1
```

### Exemplo 4: Porcentagem

```
Digite a opcao desejada (1 - 20) >>>	8

Digite um numero >>> 20
Digite outro numero >>> 150

 O resultado eh 30.00

 Digite 1 para continuar >>> 0
```

(20% de 150 = 30)

---

**Identificação da estudante**  
Patrícia Liane, Graduanda em Ciência da Computação – Trabalho acadêmico desenvolvido na disciplina Algoritmos e Pensamento Coputacional com finalidade de prática de programação em C.
