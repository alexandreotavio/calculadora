#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        printf("Selecione uma opcao:\n");
        printf("1 - somar\n");
        printf("2 - subtrair\n");
        printf("3 - multiplicar\n");
        printf("4 - dividir\n");
        printf("5 - sair\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite dois numeros: ");
                scanf("%f%f", &num1, &num2);
                resultado = num1 + num2;
                printf("Resultado: %.2f\n\n", resultado);
                break;

            case 2:
                printf("Digite dois numeros: ");
                scanf("%f%f", &num1, &num2);
                resultado = num1 - num2;
                printf("Resultado: %.2f\n\n", resultado);
                break;

            case 3:
                printf("Digite dois numeros: ");
                scanf("%f%f", &num1, &num2);
                resultado = num1 * num2;
                printf("Resultado: %.2f\n\n", resultado);
                break;

            case 4:
                printf("Digite dois numeros: ");
                scanf("%f%f", &num1, &num2);
                if (num2 == 0) {
                    printf("Erro: divisao por zero\n\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n\n", resultado);
                }
                break;

            case 5:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida.\n\n");
        }
    } while (opcao != 5);

    return 0;
}
