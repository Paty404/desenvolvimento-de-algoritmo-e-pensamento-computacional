#include <stdio.h>
#include <math.h>

int main () {
    float num1 = 0, num2 = 0, resultado = 0;
    int op = 0;
    int sucesso = 1;

    do {
        sucesso = 1;

        // ======== MENU ========
        printf("\n\t        ======== MENU ========");   
        printf("\n\t(1)  Soma               (11) Media Aritmetica");
        printf("\n\t(2)  Subtracao          (12) Media Ponderada (pesos 2 e 3)");
        printf("\n\t(3)  Multiplicacao      (13) Elevar ao quadrado");
        printf("\n\t(4)  Divisao            (14) Elevar ao cubo");
        printf("\n\t(5)  Resto Divisao      (15) Hipotenusa");
        printf("\n\t(6)  Potenciacao        (16) Raiz Cubica");
        printf("\n\t(7)  Raiz quadrada      (17) Fatorial");
        printf("\n\t(8)  Porcentagem        (18) Seno (rad)");
        printf("\n\t(9)  Log natural        (19) Cosseno (rad)");
        printf("\n\t(10) Log na base 10     (20) Tangente (rad)\n\t");

        printf("\n\t================\n\t"); 
        printf("Digite a opcao desejada (1 - 20) >>>\t");
        scanf("%i", &op);

        if (op < 1 || op > 20) {
            printf("\n\t Digite uma opcao valida\n");
            continue;
        }

        // ======== RECEBENDO NUMEROS ======== //
        printf("\n\tDigite um numero >>> ");
        scanf("%f", &num1);
        
        if (op == 1 || op == 2 || op == 3 || op == 4 || op == 5 || op == 6 
            || op == 8 || op == 11 || op == 12 || op == 15) {
            printf("\tDigite outro numero >>> ");
            scanf("%f", &num2);
        }

        // ======== REALIZANDO OPERAÇÕES ======== //
        switch(op){
            case 1:
                resultado = num1 + num2;
                break;
            case 2:
                resultado = num1 - num2;
                break;
            case 3:
                resultado = num1 * num2;
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                } else {
                    printf("\n\tErro: Divisao por 0.");
                    sucesso = 0;
                }
                break;
            case 5:
                if (num2 != 0) {
                    resultado = fmod(num1, num2);
                } else {
                    printf("\n\tErro: Divisao por 0.");
                    sucesso = 0;
                } 
                break;   
            case 6:
                resultado = pow(num1, num2);
                break;
            case 7:
                if (num1 >= 0) {
                    resultado = sqrt(num1);
                } else {
                    printf("\n\tErro: Raiz de numero negativo!");
                    sucesso = 0;
                }
                break;
            case 8:
                resultado = (num1 * num2) / 100.0;
                break;
            case 9:
                if (num1 > 0) {
                    resultado = log(num1);
                } else {
                    printf("\n\tErro: Logaritmo exige numero > 0");
                    sucesso = 0;
                }
                break;
            case 10:
                if (num1 > 0) {
                    resultado = log10(num1);
                } else {
                    printf("\n\tErro: Logaritmo exige numero > 0");
                    sucesso = 0;
                }
                break;
            case 11:
                resultado = (num1 + num2) / 2.0;
                break;
            case 12:
                resultado = ((num1 * 2.0) + (num2 * 3.0)) / 5.0;
                break;
            case 13:
                resultado = num1 * num1;
                break;
            case 14:
                resultado = num1 * num1 * num1;
                break;
            case 15:
                resultado = hypot(num1, num2);
                break;
            case 16:
                resultado = cbrt(num1);
                break;
            case 17:
                if (num1 >= 0 && num1 == (int)num1) {
                    resultado = 1;
                    for (int i = 1; i <= (int)num1; i++) {
                        resultado *= i;
                    }
                } else {
                    printf("\n\tErro: Fatorial exige numero inteiro nao-negativo!");
                    sucesso = 0;
                }
                break;
            case 18:
                resultado = sin(num1);
                break;
            case 19:
                resultado = cos(num1);
                break;
            case 20:
                resultado = tan(num1);
                break;
        }

        if (sucesso == 1) {
            printf("\n\t O resultado eh %0.2f\n", resultado);   
        }

        printf("\n\t Digite 1 para continuar >>> ");
        scanf("%i", &op);

    } while(op == 1);

    return 0;
}
