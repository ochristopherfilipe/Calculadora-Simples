#include <stdio.h>

int main() {
    char operator; // Variável para armazenar o operador (+, -, *, /)
    double num1, num2; // Variáveis para armazenar os números inseridos pelo usuário

    printf("Calculadora Simples\n");
    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operator); // Solicita ao usuário para inserir um operador

    printf("Digite dois números: ");
    scanf("%lf %lf", &num1, &num2); // Solicita ao usuário para inserir dois números

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2); // Realiza a adição
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2); // Realiza a subtração
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2); // Realiza a multiplicação
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2); // Realiza a divisão (verifica se o divisor não é zero)
            } else {
                printf("Divisão por zero não é permitida.\n"); // Trata divisão por zero
            }
            break;
        default:
            printf("Operador inválido.\n"); // Trata operador inválido
    }

    return 0;
}
