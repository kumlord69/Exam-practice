#include <stdio.h>
#include <math.h>

int add(int a, int b) {
    printf("The result is: %d \n",a + b);
}
int subtract(int a, int b) {
    printf("The result is: %d\n",a - b);
}
int multiply(int a, int b) {
    printf("The result is: %d\n",a * b);
}
int divide(int a, int b) {
    if (b != 0) {
        printf("The result is: %d \n",a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
int square(int a, int b) {
    printf("The result is: %.2f \n",a*a);
    printf("The result is: %.2f \n",b * b);
} 


int main()
{
    int a, b;
    char op, choice;
    while(op != 'e' && op != 'E') {
        yes:
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        no:
        printf("Choose an operation (+, -, *, /,Square(s or S), Exit(e or E): ");
        scanf(" %c", &op);
        switch (op) {
            case '+':
            add(a, b);
            printf("would you like to use the same variable? (y/n): ");
            scanf(" %c", &choice);
            if (choice == 'y' || choice == 'Y') {
            goto yes; 
            } else if (choice == 'n' || choice == 'N') {
            goto no; 
            }
            break;
        case '-':
            subtract(a, b);
            printf("would you like to use the same variable? (y/n): ");
            scanf(" %c", &choice);
            if (choice == 'y' || choice == 'Y') {
            goto yes; 
            } else if (choice == 'n' || choice == 'N') {
            goto no; 
            }
            break;
        case '*':
            multiply(a, b);
            printf("would you like to use the same variable? (y/n): ");
            scanf(" %c", &choice);
            if (choice == 'y' || choice == 'Y') {
            goto yes; 
            } else if (choice == 'n' || choice == 'N') {
            goto no; 
            }
            break;
        case '/':
            divide(a, b);
            printf("would you like to use the same variable? (y/n): ");
            scanf(" %c", &choice);
            if (choice == 'y' || choice == 'Y') {
            goto yes; 
            } else if (choice == 'n' || choice == 'N') {
            goto no; 
            }
            break;
        case 's':
        case 'S':
            square(a, b);
            printf("would you like to use the same variable? (y/n): ");
            scanf(" %c", &choice);
            if (choice == 'y' || choice == 'Y') {
            goto yes; 
            } else if (choice == 'n' || choice == 'N') {
            goto no; 
            }
            break;
        case 'e':
        case 'E':   
            break;
        default:
            printf("Invalid operation. Exiting.\n");
            break;
    }
      printf("-----------------------------\n");
    }
} 

