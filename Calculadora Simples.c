#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Calculadora Simples\n");
    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Digite dois numeros: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Divisao por zero nao eh permitida.\n");
            }
            break;
        default:
            printf("Operador invalido.\n");
    }

    return 0;
}
