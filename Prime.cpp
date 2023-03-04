#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
	
    srand(time(NULL));
    do{
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    int num3 = rand() % 10 + 1;
    int num4 = rand() % 10 + 1;
    	printf("Welcome to the game 'PRIME'\n");
	printf("Rules:\n1.4 numbers are given\n2.You have to do operations between the 4 numbers by chosing any of the ( +, -, *, /)\n3.Your aim is to combine all four numbers with various operations to get the final answer as a prime number");

    printf("\nThe numbers are: %d %d %d %d\n", num1, num2, num3, num4);
    
    int result;
    char op1, op2, op3;
    
    printf("Enter three operations (+, -, *, /): ");
    scanf(" %c %c %c", &op1, &op2, &op3);
    
    switch (op1) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operation.\n");
            return 1;
    }
    
    switch (op2) {
        case '+':
            result += num3;
            break;
        case '-':
            result -= num3;
            break;
        case '*':
            result *= num3;
            break;
        case '/':
            result /= num3;
            break;
        default:
            printf("Invalid operation.\n");
            return 1;
    }
    
    switch (op3) {
        case '+':
            result += num4;
            break;
        case '-':
            result -= num4;
            break;
        case '*':
            result *= num4;
            break;
        case '/':
            result /= num4;
            break;
        default:
            printf("Invalid operation.\n");
            return 1;
    }
     printf("Your final answer is ...%d\n", result);
    if (is_prime(result)) {
        printf("CONGRATULATIONSSS!!!!!! YOU WIN THE GAME\n");
    } else {
        printf("Fail. Try again.......\n");
    printf("Do you wish to continue(Y/N)\nPress 1 for Yes and 0 for No\n");
    scanf("%d", &option);
}while(option== 1);
}

