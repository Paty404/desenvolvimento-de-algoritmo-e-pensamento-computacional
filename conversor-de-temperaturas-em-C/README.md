# Conversor de Escalas Termométricas

Este é um programa em C que criei para facilitar a vida de quem precisa converter temperaturas entre as escalas Celsius, Fahrenheit e Kelvin. A ideia foi praticar a lógica de programação com estruturas de repetição, tomada de decisão e cálculos matemáticos, tudo de um jeito simples e interativo.

## Descrição da atividade

Conversor termométrico que funciona direto no terminal. O usuário não precisa excutar nem um calcúlo, porque o próprio programa irá fazer isso. Basta escolher o tipo de conversão, digitar o valor e o resultado aparece na tela. É um ótimo exercício para fixar o comando switch e a validação de entradas.

## Funcionamento do programa

Ao executar o programa, você vai se deparar com um menu numerado de 0 a 6. 

- Primeiro, você digita o número da opção desejada. Se errar e colocar um número fora do intervalo permitido (como 7 ou -2), o programa não quebra, ele apenas avisa que a opção é inválida e te dá a chance de digitar novamente.
- Se você digitar 0, o programa imprime "Saindo do programa..." e encerra a execução.
- Quando a opção é válida (de 1 a 6), ele pede para você informar o valor da temperatura. Basta digitar o número (podendo ser com casas decimais) e apertar Enter.
- Na sequência, o cálculo é feito pelo programa e o resultado é exibido, mostrando o valor original e o valor convertido com a unidade correta.
- Depois de mostrar o resultado, o menu aparece novamente, e o programa só para de rodar quando você escolher a opção de sair.

Um detalhe legal é que a validação da opção é feita antes de entrar no bloco de conversões, garantindo que o sistema nunca tente processar uma opção inexistente. Isso torna o código mais seguro e organizado.

## Opções de conversão implementadas

O programa atende todas as combinações diretas entre as três escalas mais usadas no mundo. Confira a lista:

1. Kelvin para Celsius  
2. Kelvin para Fahrenheit  
3. Celsius para Kelvin  
4. Celsius para Fahrenheit  
5. Fahrenheit para Celsius  
6. Fahrenheit para Kelvin

Com essas seis opções, você cobre praticamente todas as necessidades do dia a dia.

## Instruções para execução

Para rodar esse programa, você vai precisar de qualquer compilador de C instalado na sua máquina.

Siga o passo a passo:

1. Copie o código-fonte e salve em um arquivo com extensão .c. Você pode nomeá-lo como conversor.c, por exemplo.

2. Abra o terminal (ou Prompt de Comando no Windows) e navegue até a pasta onde você salvou o arquivo.

3. Compile o programa usando o comando abaixo. Lembre-se de incluir a flag -lm, pois foi utilizado a biblioteca matemática para algumas operações:

   gcc conversor.c -o conversor -lm

4. Após a compilação, execute o programa digitando:

   - Se estiver no Linux ou Mac: ./conversor
   - Se estiver no Windows: conversor.exe

5. Pronto! O menu vai aparecer e você já pode começar a testar as conversões.
