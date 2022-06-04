#include <stdio.h>

int main(int argc, char const *argv[])
{
    float num1, num2, resultado;
    int op;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("\n Escolha a operação: \n 1 - Soma \n 2 - Subtração \n 3 - Multiplicaçao \n 4 - Divisão \n");
    scanf("%d", &op);
    switch (op)
    {
        case 1:
        resultado = num1 + num2;
        printf("Soma dos valores igual a: %.3f", resultado);
        break;

        case 2:
        resultado = num1 - num2;
        printf("Subtração dos valores igual a: %.3f", resultado);
        break;

        case 3:
        resultado = num1 * num2;
        printf("A multiplicação é: %.3f", resultado);
        break;

        case 4:
        resultado = num1 / num2;
        printf("A divisão é: %.3f, resultado");
        break;

        default : printf("\n Opção invalida");
    }
    return 0;
}
