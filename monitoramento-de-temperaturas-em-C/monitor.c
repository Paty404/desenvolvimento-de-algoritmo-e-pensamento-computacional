#include <stdio.h>

// Função auxiliar para limpar o buffer do teclado em caso de digitação incorreta (ex: letras)
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    float limite_temp;
    float temp_atual;
    float soma_temp = 0.0;
    float maior_temp, menor_temp;
    int total_leituras = 0;
    int total_acima_limite = 0;
    int consecutivas_acima = 0;

    printf("=== MONITORAMENTO DE TEMPERATURAS ===\n\n");

    do {
        printf("Informe o limite de alerta para a temperatura (entre 0 C e 299 C): ");
        
        if (scanf("%f", &limite_temp) != 1) {
            printf("Erro: Digite apenas numeros inteiros ou decimais!\n\n");
            limparBuffer(); // Remove as letras/símbolos do buffer
            limite_temp = -1; // Força a permanência no laço
            continue;
        }

        if (limite_temp <= 0 || limite_temp >= 300.0) {
            printf("Erro: O limite de alerta deve ser maior que 0 C e menor que 300 C!\n\n");
        }
    } while (limite_temp <= 0 || limite_temp >= 300.0);

    printf("\nLimite operacional de alerta configurado para: %.2f C\n", limite_temp);
    printf("Iniciando monitoramento...\n\n");

    // Laço de Monitoramento
    while (consecutivas_acima < 3) {
        
        // Validação da leitura do sensor com tratamento para letras
        do {
            printf("Digite a temperatura lida pelo sensor (-50 C a 300 C): ");
            
            if (scanf("%f", &temp_atual) != 1) {
                printf("Erro: Entrada invalida! Digite apenas valores numericos.\n\n");
                limparBuffer(); // Evita o loop infinito quando letras são digitadas
                temp_atual = -999; // Força valor fora da faixa válida para repetir o laço
                continue;
            }

            if (temp_atual < -50.0 || temp_atual > 300.0) {
                printf("Erro: Leitura fora da capacidade do sensor (-50 C a 300 C). Tente novamente.\n\n");
            }
        } while (temp_atual < -50.0 || temp_atual > 300.0);

        // Atualização de dados estatísticos
        soma_temp += temp_atual;
        total_leituras++;

        if (total_leituras == 1) {
            maior_temp = temp_atual;
            menor_temp = temp_atual;
        } else {
            if (temp_atual > maior_temp) maior_temp = temp_atual;
            if (temp_atual < menor_temp) menor_temp = temp_atual;
        }

        // Checagem de limite e contagem consecutiva
        if (temp_atual > limite_temp) {
            total_acima_limite++;
            consecutivas_acima++;
            printf("ALERTA: Temperatura acima do limite! (%d/3 consecutivas)\n\n", consecutivas_acima);
        } else {
            consecutivas_acima = 0; // Reinicia a contagem se a temperatura voltar ao normal
            printf("Temperatura dentro do limite seguro.\n\n");
        }
    }

    printf("=====================================================\n");
    printf("  PARADA AUTOMATICA: 3 LEITURAS CONSECUTIVAS ACIMA DO LIMITE!\n");
    printf("=====================================================\n");
    printf("RELATORIO FINAL:\n");
    printf("- Total de leituras validas: %d\n", total_leituras);
    printf("- Maior temperatura registrada: %.2f C\n", maior_temp);
    printf("- Menor temperatura registrada: %.2f C\n", menor_temp);
    printf("- Media das temperaturas: %.2f C\n", soma_temp / total_leituras);
    printf("- Total de vezes que o limite foi ultrapassado: %d\n", total_acima_limite);
    printf("=====================================================\n");

    return 0;
}
