# Monitoramento de Temperaturas em C

## 1. Identificação

* **Nome da Aluna:** Patrícia Liane

* **Disciplina:** Algoritmos e Pensamento Computacional

* **Professora:** Profa. Karla Sartin

* **Título do Projeto:** Monitoramento de Temperaturas em C

## 2. Objetivo

O programa tem como objetivo simular o monitoramento em tempo real da temperatura de uma máquina industrial para prevenir danos severos por superaquecimento. Ele resolve o problema da falta de controle contínuo ao coletar medições, validar os dados de entrada contra falhas ou limites do sensor, registrar estatísticas gerais (média, maior e menor temperatura) e acionar uma parada de emergência automática quando identificar um risco de falha térmica.

## 3. Funcionamento do Programa

* **Como o limite de temperatura é definido:**
  O usuário informa o limite de alerta inicial no começo do programa. Esse limite passa por uma validação para garantir que esteja entre $0^\circ\text{C}$ e $299^\circ\text{C}$, permitindo que a capacidade máxima do sensor ($300^\circ\text{C}$) consiga registrar medições acima do limite estabelecido.

* **Como as leituras são realizadas:**
  As leituras são inseridas pelo usuário dentro do laço principal do programa usando a função `scanf`, simulando a medição contínua do sensor industrial.

* **Como valores inválidos são tratados:**
  O programa utiliza um laço `do...while` para verificar se a entrada é válida. Se o usuário digitar letras ou símbolos, o programa identifica a falha no `scanf` e utiliza uma função para limpar o buffer do teclado, evitando o travamento em *loop* infinito. Se o valor estiver fora da faixa operacional do sensor ($-50^\circ\text{C}$ a $300^\circ\text{C}$), uma mensagem de erro é exibida e o programa solicita uma nova leitura sem contabilizá-la nas estatísticas.

* **Como o programa identifica temperaturas acima do limite:**
  Após a leitura de uma temperatura válida, o sistema compara o valor lido com o limite inicial por meio da estrutura condicional `if (temp_atual > limite_temp)`.

* **Como funciona a contagem de temperaturas consecutivas:**
  É utilizada uma variável contadora (`consecutivas_acima`). Sempre que uma temperatura lida for maior que o limite configurado, o contador soma $+1$. Caso a leitura seja menor ou igual ao limite seguro, a contagem é reiniciada para $0$, garantindo que apenas superaquecimentos contínuos acionem o alarme.

* **Qual condição encerra o monitoramento:**
  O monitoramento é encerrado automaticamente assim que o contador de temperaturas consecutivas atinge o valor $3$ (`consecutivas_acima == 3`). Ao encerrar o laço, o programa gera e exibe o relatório final com as estatísticas completas das medições.

## 4. Estruturas de Repetição Utilizadas

No projeto, optou-se por utilizar **uma combinação de `while` e `do...while`**:

1. **`do...while`:**

   * **Onde foi utilizado:** Na leitura/validação do limite inicial de temperatura e nas validações de entrada do sensor a cada leitura.

   * **Justificativa:** Essa estrutura garante que o bloco de código seja executado **pelo menos uma vez** antes de checar a condição. Como é indispensável pedir o dado ao usuário antes de verificar se ele é válido ou não, o `do...while` é a escolha ideal.

2. **`while`:**

   * **Onde foi utilizado:** No laço principal de monitoramento do sistema (`while (consecutivas_acima < 3)`).

   * **Justificativa:** O laço `while` testava a condição de parada **antes** de continuar o ciclo. Isso permitiu garantir de forma direta e limpa que, assim que a condição de segurança fosse violada (3 alertas seguidos), o monitoramento parasse imediatamente antes de pedir qualquer nova leitura.

## 5. Como Executar

### Pré-requisitos

* Compilador C (como o `gcc`) instalado no sistema.

### Passo a Passo

1. Compile o código-fonte executando o seguinte comando no terminal:

   ```
   gcc monitor.c -o monitor
   
   ```

2. Execute o programa compilado:

   * **No Linux / macOS:**

     ```
     ./monitor
     
     ```

   * **No Windows:**

     ```
     monitor.exe
     
     ```

## 6. Testes realizados

### Teste 1: validação de entradas inválidas.

No teste de validação de entradas inválidas foi digitado letras ao invés de números, e o programa imprimiu "Erro: Digite apenas numeros inteiros ou decimais!", e depois o programa continua rodando e pedindo para o usuário digitar um número.

### Teste 2: temperaturas acima do limite, porém não consecutivas.

Com o limite configurado para $100.00^\circ\text{C}$, foram inseridas leituras alternadas:
  * $110^\circ\text{C}$ $\rightarrow$ Alerta exibido ($1/3$ consecutivas).
  * $80^\circ\text{C}$ $\rightarrow$ Temperatura dentro do limite seguro (contagem resetada).
  * $120^\circ\text{C}$ $\rightarrow$ Alerta exibido ($1/3$ consecutivas).
  * $75^\circ\text{C}$ $\rightarrow$ Temperatura dentro do limite seguro (contagem resetada).
  * $130^\circ\text{C}$ $\rightarrow$ Alerta exibido ($1/3$ consecutivas).
  * O programa manteve o monitoramento ativo sem interromper a execução.

### Teste 3: três temperaturas consecutivas acima do limite, provocando o encerramento automático.

Com o limite configurado para $150.00^\circ\text{C}$, foram digitadas $3$ leituras seguidas acima do limite: $155^\circ\text{C}$ ($1/3$), $180^\circ\text{C}$ ($2/3$) e $177^\circ\text{C}$ ($3/3$). O sistema disparou a parada automática de emergência e imprimiu com precisão o **Relatório Final**:
  * **Total de leituras válidas:** $3$
  * **Maior temperatura registrada:** $180.00^\circ\text{C}$
  * **Menor temperatura registrada:** $155.00^\circ\text{C}$
  * **Média das temperaturas:** $170.67^\circ\text{C}$
  * **Total de vezes que o limite foi ultrapassado:** $3$

## Questão Final de Reflexão

**Por que você escolheu `while`, `do...while` ou uma combinação das duas estruturas? Em qual parte do algoritmo a diferença entre testar a condição antes ou depois da execução foi importante para sua solução?**

A escolha de combinar as duas estruturas foi feita para aproveitar a característica específica de cada laço e deixar o código robusto:

* O **`do...while`** foi fundamental para o **tratamento de entradas e validações**. A diferença de testar a condição *depois* da execução foi crucial aqui porque não faria sentido testar se um dado é válido antes mesmo do usuário ter a chance de digitá-lo pela primeira vez. A execução do bloco garante a leitura, e o teste posterior decide se a mensagem de erro deve ser mostrada e a leitura repetida.

* Por outro lado, o **`while`** foi mais indicado para controlar o **ciclo principal de monitoramento**. A testagem da condição *antes* da execução garantiu que, no momento exato em que a terceira leitura crítica fosse registrada, o programa interrompesse o ciclo imediatamente, impedindo a solicitação desnecessária de uma nova temperatura e direcionando a aplicação para o relatório de emergência.
