#include <stdio.h>
#include<float.h>

int main() {
    char op;
    double n1,n2,res;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two numbers: \n");
    scanf("%lf %lf", &n1, &n2);
    switch(op) {
        case'+':
        res=n1+n2;
        break;
        case'-':
        res=n1-n2;
        break;
        case'*':
        res=n1*n2;
        break;
        case'/':
        if(n2!=0)
        res=n1/n2;
        else {
            printf("Error: Division by zero is not allowed.\n");
            return 1; // Exit with an error code
        }
        break;
        default:
        printf("Error: Invalid operator.\n");   

    }
    printf("Result: %lf\n", res);
    return 0;
}