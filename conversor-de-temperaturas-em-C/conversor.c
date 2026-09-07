#include <stdio.h>
#include <math.h>


int main () {
    float temp, resultado;
    int op;
do {
    printf("\n--- CONVERSÃO DE ESCALAS TERMOMÉTRICAS ---\n");
    printf("0. Sair do programa\n");
    printf("1. Kelvin para Celsius\n");
    printf("2. Kelvin para Fahrenheit\n");
    printf("3. Celsius para Kelvin\n");
    printf("4. Celsius para Fahrenheit\n");
    printf("5. Fahrenheit para Celsius\n"); 
    printf("6. Fahrenheit para Kelvin\n");
    printf("Escolha uma opcao (0-6): ");
    scanf("%d", &op);
    
    if (op == 0) {
        printf("\nSaindo do programa...\n"); break;
    }
    
    if (op < 1 || op > 6) {
        printf("\nOpcao invalida! Tente novamente.\n"); continue;
    }
    
    printf("Digite o valor: ");
    scanf("%f", &temp);
    
    switch(op) {
        case 1: //K para C
            resultado = temp - 273;
            printf("\n %.2f K = %.2f °C\n", temp, resultado);
            break;
        case 2: //K para F
            resultado = (temp - 273) * 1.8 + 32;
            printf("\n%.2f K = %.2f °F\n", temp, resultado);
            break;
        case 3: //C para Kelvin
            resultado = temp + 273;
            printf("%.2f °C = %.2f K\n", temp, resultado);
            break;
        case 4: //C para F
            resultado = (temp * 1.8) + 32;
            printf("\n%.2f °C = %.2f °F\n", temp, resultado);
            break;
        case 5: //F para C
            resultado = (temp - 32) / 1.8;
            printf("\n%.2f °F = %.2f °C\n", temp, resultado);
            break;
        case 6: //F para K
            resultado = (temp - 32) * (5.0 /9.0) + 273;
            printf("\n%.2f °F = %.2f °K\n", temp, resultado);
            break;
                }
    } while (op != 0); 
    
    return 0;
}
