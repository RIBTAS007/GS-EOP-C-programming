/* perform arithmetic op on numbers  , enter operation then 2 numbers as input*/

#include <stdio.h>
int main() {
    char operator;
    int a, b;
    scanf("%c", &operator);
    scanf("%d %d", &a, &b);

    switch (operator) {
    case '+':
        printf("%d + %d = %d", a, b, a+b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a-b);
        break;
    case '*':
        printf("%d* %d = %d", a, b, a*b);
        break;
    case '/':
        printf("%d / %d = %d", a, b, a / b);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}